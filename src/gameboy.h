#ifndef _GAMEBOY_H
#define _GAMEBOY_H

#include "cpu/cpu.h"
#include "mmu/mmu.h"

struct gameboy {
    struct cpu *cpu;
    struct mmu *mmu;
    struct screen *screen;
};

struct gameboy *create_gameboy(void);
void destroy_gameboy(struct gameboy *gb);

void run(struct gameboy *gb);
#endif
