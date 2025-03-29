//
// Created by Neko on 29.03.2025.
//

#include "physical.h"

#include "common.h"

#include <assert.h>
#include <limine.h>

#include <stddef.h>
#include <stdio.h>

volatile struct limine_memmap_request memory_map_request = {
    .id = LIMINE_MEMMAP_REQUEST,
    .revision = 0,
    .response = NULL
};

typedef struct _MFE
{
    uint64_t base, length;
    struct _MFE* next;
} memory_freelist_entry;

memory_freelist_entry* head = NULL;

void initialize_physical_memory()
{
    assert(memory_map_request.response != NULL);

    struct limine_memmap_entry** memory_map = memory_map_request.response->entries;
    size_t entry_count = memory_map_request.response->entry_count;

    for (size_t i = 0; entry_count > i; i++)
    {
        struct limine_memmap_entry* entry = memory_map[i];
        if (entry->type == LIMINE_MEMMAP_USABLE)
        {
            memory_freelist_entry* mfl_entry = (memory_freelist_entry*
                )(entry->base + get_higher_half_offset());

            mfl_entry->base = entry->base;
            mfl_entry->length = entry->length;
            mfl_entry->next = head;
            head = mfl_entry;

            printf("Added memory map entry: %llx -> %llx\n", entry->base, entry->base + entry->length);
        }
    }
}

void* allocate_page()
{
    if (!head)
        return NULL; // No free memory available

    memory_freelist_entry* allocated = head;
    void* page = (void*)(allocated->base + get_higher_half_offset());

    if (allocated->length > 4096)
    {
        allocated->base += 4096;
        allocated->length -= 4096;
    }
    else
    {
        head = allocated->next;
    }

    return page;
}

void deallocate_page(void* page)
{
    uint64_t physical_address = (uint64_t)page - get_higher_half_offset();

    memory_freelist_entry* new_entry = page;
    new_entry->base = physical_address;
    new_entry->length = 4096;
    new_entry->next = head;
    head = new_entry;
}
