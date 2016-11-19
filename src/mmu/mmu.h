#ifndef _GAMEBOY_MMU_H
#define _GAMEBOY_MMU_H

#include <stdint.h>

struct mmu {
    uint8_t (*read_byte)(uint16_t address);
};

struct mmu *create_mmu(void);
void destroy_mmu(struct mmu *mmu);

uint8_t read_byte(uint16_t address);
#endif
