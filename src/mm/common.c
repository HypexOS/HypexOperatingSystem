//
// Created by Neko on 29.03.2025.
//

#include "common.h"

#include <assert.h>
#include <limine.h>
#include <stddef.h>
#include <stdint.h>

volatile struct limine_hhdm_request higher_half_offset = {.id = LIMINE_HHDM_REQUEST, .revision = 0, .response = NULL};

uintptr_t get_higher_half_offset()
{
    assert(higher_half_offset.response != NULL);
    return higher_half_offset.response->offset;
}