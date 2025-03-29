//
// Created by Neko on 29.03.2025.
//

#ifndef PHYSICAL_H
#define PHYSICAL_H

void initialize_physical_memory();
void* allocate_page();
void deallocate_page(void* page);

#endif //PHYSICAL_H
