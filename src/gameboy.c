#include <stdlib.h>

#include "gameboy.h"
#include "cpu/cpu.h"
#include "mmu/mmu.h"

struct gameboy *create_gameboy()
{
    struct gameboy *gb = malloc(sizeof(struct gameboy));
    gb->mmu = create_mmu();
    gb->cpu = create_cpu(gb->mmu);
    return gb;
}

void destroy_gameboy(struct gameboy *gb)
{
    destroy_mmu(gb->mmu);
    destroy_cpu(gb->cpu);
    free(gb);
}

void run(struct gameboy *gb)
{
    (void)gb;
}

