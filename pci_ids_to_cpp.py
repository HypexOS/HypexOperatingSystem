#!/usr/bin/env python3
import sys

def get_indent_level(line, tab_width=4):
    """
    Determines the indent level of a line.
    If the line contains any tab characters, count them.
    Otherwise, assume a fixed width (default 4 spaces per indent level).
    """
    if "\t" in line:
        return len(line) - len(line.lstrip("\t"))
    else:
        return (len(line) - len(line.lstrip())) // tab_width

def convert_pci_ids(input_filename, output_filename):
    entries = []
    current_vendor = None
    current_vendor_name = ""
    current_device = None
    current_device_name = ""

    with open(input_filename, "r") as infile:
        for line in infile:
            # Remove trailing whitespace/newlines.
            line = line.rstrip()
            # Skip empty lines or comment lines (starting with '#').
            if not line or line.lstrip().startswith("#"):
                continue

            indent = get_indent_level(line)
            # Remove any leading whitespace (tabs or spaces).
            stripped = line.lstrip(" \t")
            parts = stripped.split(None, 1)
            if not parts:
                continue

            if indent == 0:
                # Vendor line: vendor id and vendor name.
                try:
                    current_vendor = int(parts[0], 16)
                except ValueError:
                    continue
                current_vendor_name = parts[1] if len(parts) > 1 else ""
            elif indent == 1:
                # Device line: device id and device name.
                try:
                    current_device = int(parts[0], 16)
                except ValueError:
                    continue
                current_device_name = parts[1] if len(parts) > 1 else ""
                # Add an entry for the main device with no subvendor/subdevice.
                entries.append({
                    "vendor": current_vendor,
                    "device": current_device,
                    "subvendor": 0,
                    "subdevice": 0,
                    "vendor_name": current_vendor_name,
                    "device_name": current_device_name
                })
            elif indent == 2:
                # Subsystem line: subvendor, subdevice and subsystem (device) name.
                sub_parts = parts[0].split()
                if len(sub_parts) < 2:
                    continue
                try:
                    subvendor = int(sub_parts[0], 16)
                    subdevice = int(sub_parts[1], 16)
                except ValueError:
                    continue
                subsystem_name = parts[1] if len(parts) > 1 else ""
                entries.append({
                    "vendor": current_vendor,
                    "device": current_device,
                    "subvendor": subvendor,
                    "subdevice": subdevice,
                    "vendor_name": current_vendor_name,
                    "device_name": subsystem_name
                })
            else:
                # Ignore any unexpected indent levels.
                continue

    # Write the output .cpp file.
    with open(output_filename, "w") as outfile:
        outfile.write("#include \"pci_ids.hpp\"\n\n")
        outfile.write("pci_ids_entry pci_ids_db[] = {\n")
        for entry in entries:
            outfile.write("    {0x%04X, 0x%04X, 0x%04X, 0x%04X, \"%s\", \"%s\"},\n" % (
                entry["vendor"],
                entry["device"],
                entry["subvendor"],
                entry["subdevice"],
                entry["vendor_name"].replace('"', '\\"'),
                entry["device_name"].replace('"', '\\"')
            ))
        outfile.write("};\n")
        outfile.write("\nconst size_t pci_ids_db_size = sizeof(pci_ids_db) / sizeof(pci_ids_db[0]);\n")

if __name__ == "__main__":
    if len(sys.argv) < 3:
        print("Usage: {} <input pci.ids file> <output .cpp file>".format(sys.argv[0]))
        sys.exit(1)
    convert_pci_ids(sys.argv[1], sys.argv[2])
