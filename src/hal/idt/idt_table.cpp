//
// Created by Neko on 20.01.2025.
//

#include "idt.h"

extern "C" void idt_isr0();
extern "C" void idt_isr1();
extern "C" void idt_isr2();
extern "C" void idt_isr3();
extern "C" void idt_isr4();
extern "C" void idt_isr5();
extern "C" void idt_isr6();
extern "C" void idt_isr7();
extern "C" void idt_isr8();
extern "C" void idt_isr9();
extern "C" void idt_isr10();
extern "C" void idt_isr11();
extern "C" void idt_isr12();
extern "C" void idt_isr13();
extern "C" void idt_isr14();
extern "C" void idt_isr15();
extern "C" void idt_isr16();
extern "C" void idt_isr17();
extern "C" void idt_isr18();
extern "C" void idt_isr19();
extern "C" void idt_isr20();
extern "C" void idt_isr21();
extern "C" void idt_isr22();
extern "C" void idt_isr23();
extern "C" void idt_isr24();
extern "C" void idt_isr25();
extern "C" void idt_isr26();
extern "C" void idt_isr27();
extern "C" void idt_isr28();
extern "C" void idt_isr29();
extern "C" void idt_isr30();
extern "C" void idt_isr31();
extern "C" void idt_isr32();
extern "C" void idt_isr33();
extern "C" void idt_isr34();
extern "C" void idt_isr35();
extern "C" void idt_isr36();
extern "C" void idt_isr37();
extern "C" void idt_isr38();
extern "C" void idt_isr39();
extern "C" void idt_isr40();
extern "C" void idt_isr41();
extern "C" void idt_isr42();
extern "C" void idt_isr43();
extern "C" void idt_isr44();
extern "C" void idt_isr45();
extern "C" void idt_isr46();
extern "C" void idt_isr47();
extern "C" void idt_isr48();
extern "C" void idt_isr49();
extern "C" void idt_isr50();
extern "C" void idt_isr51();
extern "C" void idt_isr52();
extern "C" void idt_isr53();
extern "C" void idt_isr54();
extern "C" void idt_isr55();
extern "C" void idt_isr56();
extern "C" void idt_isr57();
extern "C" void idt_isr58();
extern "C" void idt_isr59();
extern "C" void idt_isr60();
extern "C" void idt_isr61();
extern "C" void idt_isr62();
extern "C" void idt_isr63();
extern "C" void idt_isr64();
extern "C" void idt_isr65();
extern "C" void idt_isr66();
extern "C" void idt_isr67();
extern "C" void idt_isr68();
extern "C" void idt_isr69();
extern "C" void idt_isr70();
extern "C" void idt_isr71();
extern "C" void idt_isr72();
extern "C" void idt_isr73();
extern "C" void idt_isr74();
extern "C" void idt_isr75();
extern "C" void idt_isr76();
extern "C" void idt_isr77();
extern "C" void idt_isr78();
extern "C" void idt_isr79();
extern "C" void idt_isr80();
extern "C" void idt_isr81();
extern "C" void idt_isr82();
extern "C" void idt_isr83();
extern "C" void idt_isr84();
extern "C" void idt_isr85();
extern "C" void idt_isr86();
extern "C" void idt_isr87();
extern "C" void idt_isr88();
extern "C" void idt_isr89();
extern "C" void idt_isr90();
extern "C" void idt_isr91();
extern "C" void idt_isr92();
extern "C" void idt_isr93();
extern "C" void idt_isr94();
extern "C" void idt_isr95();
extern "C" void idt_isr96();
extern "C" void idt_isr97();
extern "C" void idt_isr98();
extern "C" void idt_isr99();
extern "C" void idt_isr100();
extern "C" void idt_isr101();
extern "C" void idt_isr102();
extern "C" void idt_isr103();
extern "C" void idt_isr104();
extern "C" void idt_isr105();
extern "C" void idt_isr106();
extern "C" void idt_isr107();
extern "C" void idt_isr108();
extern "C" void idt_isr109();
extern "C" void idt_isr110();
extern "C" void idt_isr111();
extern "C" void idt_isr112();
extern "C" void idt_isr113();
extern "C" void idt_isr114();
extern "C" void idt_isr115();
extern "C" void idt_isr116();
extern "C" void idt_isr117();
extern "C" void idt_isr118();
extern "C" void idt_isr119();
extern "C" void idt_isr120();
extern "C" void idt_isr121();
extern "C" void idt_isr122();
extern "C" void idt_isr123();
extern "C" void idt_isr124();
extern "C" void idt_isr125();
extern "C" void idt_isr126();
extern "C" void idt_isr127();
extern "C" void idt_isr128();
extern "C" void idt_isr129();
extern "C" void idt_isr130();
extern "C" void idt_isr131();
extern "C" void idt_isr132();
extern "C" void idt_isr133();
extern "C" void idt_isr134();
extern "C" void idt_isr135();
extern "C" void idt_isr136();
extern "C" void idt_isr137();
extern "C" void idt_isr138();
extern "C" void idt_isr139();
extern "C" void idt_isr140();
extern "C" void idt_isr141();
extern "C" void idt_isr142();
extern "C" void idt_isr143();
extern "C" void idt_isr144();
extern "C" void idt_isr145();
extern "C" void idt_isr146();
extern "C" void idt_isr147();
extern "C" void idt_isr148();
extern "C" void idt_isr149();
extern "C" void idt_isr150();
extern "C" void idt_isr151();
extern "C" void idt_isr152();
extern "C" void idt_isr153();
extern "C" void idt_isr154();
extern "C" void idt_isr155();
extern "C" void idt_isr156();
extern "C" void idt_isr157();
extern "C" void idt_isr158();
extern "C" void idt_isr159();
extern "C" void idt_isr160();
extern "C" void idt_isr161();
extern "C" void idt_isr162();
extern "C" void idt_isr163();
extern "C" void idt_isr164();
extern "C" void idt_isr165();
extern "C" void idt_isr166();
extern "C" void idt_isr167();
extern "C" void idt_isr168();
extern "C" void idt_isr169();
extern "C" void idt_isr170();
extern "C" void idt_isr171();
extern "C" void idt_isr172();
extern "C" void idt_isr173();
extern "C" void idt_isr174();
extern "C" void idt_isr175();
extern "C" void idt_isr176();
extern "C" void idt_isr177();
extern "C" void idt_isr178();
extern "C" void idt_isr179();
extern "C" void idt_isr180();
extern "C" void idt_isr181();
extern "C" void idt_isr182();
extern "C" void idt_isr183();
extern "C" void idt_isr184();
extern "C" void idt_isr185();
extern "C" void idt_isr186();
extern "C" void idt_isr187();
extern "C" void idt_isr188();
extern "C" void idt_isr189();
extern "C" void idt_isr190();
extern "C" void idt_isr191();
extern "C" void idt_isr192();
extern "C" void idt_isr193();
extern "C" void idt_isr194();
extern "C" void idt_isr195();
extern "C" void idt_isr196();
extern "C" void idt_isr197();
extern "C" void idt_isr198();
extern "C" void idt_isr199();
extern "C" void idt_isr200();
extern "C" void idt_isr201();
extern "C" void idt_isr202();
extern "C" void idt_isr203();
extern "C" void idt_isr204();
extern "C" void idt_isr205();
extern "C" void idt_isr206();
extern "C" void idt_isr207();
extern "C" void idt_isr208();
extern "C" void idt_isr209();
extern "C" void idt_isr210();
extern "C" void idt_isr211();
extern "C" void idt_isr212();
extern "C" void idt_isr213();
extern "C" void idt_isr214();
extern "C" void idt_isr215();
extern "C" void idt_isr216();
extern "C" void idt_isr217();
extern "C" void idt_isr218();
extern "C" void idt_isr219();
extern "C" void idt_isr220();
extern "C" void idt_isr221();
extern "C" void idt_isr222();
extern "C" void idt_isr223();
extern "C" void idt_isr224();
extern "C" void idt_isr225();
extern "C" void idt_isr226();
extern "C" void idt_isr227();
extern "C" void idt_isr228();
extern "C" void idt_isr229();
extern "C" void idt_isr230();
extern "C" void idt_isr231();
extern "C" void idt_isr232();
extern "C" void idt_isr233();
extern "C" void idt_isr234();
extern "C" void idt_isr235();
extern "C" void idt_isr236();
extern "C" void idt_isr237();
extern "C" void idt_isr238();
extern "C" void idt_isr239();
extern "C" void idt_isr240();
extern "C" void idt_isr241();
extern "C" void idt_isr242();
extern "C" void idt_isr243();
extern "C" void idt_isr244();
extern "C" void idt_isr245();
extern "C" void idt_isr246();
extern "C" void idt_isr247();
extern "C" void idt_isr248();
extern "C" void idt_isr249();
extern "C" void idt_isr250();
extern "C" void idt_isr251();
extern "C" void idt_isr252();
extern "C" void idt_isr253();
extern "C" void idt_isr254();
extern "C" void idt_isr255();

volatile gate_descriptor_64 idt[256] = {
    IDT_ENTRY(&idt_isr0, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr1, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr2, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr3, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr4, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr5, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr6, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr7, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr8, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr9, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr10, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr11, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr12, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr13, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr14, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr15, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr16, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr17, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr18, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr19, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr20, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr21, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr22, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr23, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr24, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr25, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr26, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr27, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr28, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr29, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr30, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr31, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr32, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr33, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr34, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr35, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr36, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr37, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr38, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr39, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr40, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr41, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr42, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr43, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr44, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr45, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr46, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr47, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr48, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr49, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr50, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr51, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr52, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr53, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr54, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr55, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr56, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr57, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr58, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr59, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr60, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr61, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr62, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr63, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr64, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr65, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr66, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr67, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr68, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr69, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr70, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr71, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr72, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr73, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr74, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr75, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr76, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr77, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr78, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr79, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr80, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr81, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr82, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr83, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr84, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr85, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr86, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr87, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr88, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr89, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr90, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr91, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr92, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr93, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr94, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr95, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr96, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr97, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr98, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr99, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr100, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr101, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr102, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr103, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr104, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr105, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr106, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr107, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr108, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr109, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr110, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr111, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr112, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr113, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr114, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr115, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr116, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr117, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr118, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr119, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr120, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr121, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr122, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr123, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr124, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr125, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr126, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr127, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr128, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr129, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr130, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr131, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr132, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr133, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr134, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr135, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr136, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr137, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr138, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr139, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr140, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr141, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr142, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr143, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr144, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr145, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr146, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr147, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr148, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr149, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr150, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr151, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr152, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr153, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr154, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr155, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr156, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr157, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr158, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr159, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr160, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr161, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr162, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr163, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr164, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr165, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr166, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr167, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr168, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr169, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr170, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr171, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr172, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr173, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr174, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr175, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr176, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr177, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr178, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr179, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr180, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr181, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr182, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr183, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr184, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr185, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr186, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr187, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr188, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr189, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr190, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr191, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr192, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr193, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr194, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr195, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr196, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr197, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr198, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr199, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr200, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr201, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr202, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr203, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr204, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr205, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr206, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr207, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr208, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr209, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr210, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr211, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr212, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr213, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr214, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr215, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr216, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr217, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr218, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr219, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr220, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr221, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr222, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr223, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr224, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr225, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr226, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr227, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr228, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr229, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr230, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr231, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr232, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr233, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr234, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr235, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr236, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr237, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr238, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr239, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr240, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr241, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr242, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr243, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr244, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr245, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr246, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr247, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr248, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr249, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr250, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr251, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr252, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr253, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr254, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST),
    IDT_ENTRY(&idt_isr255, IDT_DEFAULT_SEGMENT, IDT_GATE_TYPE_INTERRUPT, IDT_DPL_RING_0, IDT_PRESENT, IDT_NO_IST)};