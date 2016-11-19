#include <stdlib.h>
#include "cpu.h"
#include "../mmu/mmu.h"

struct cpu *create_cpu(struct mmu *mmu)
{
    struct cpu *cpu = malloc(sizeof(struct cpu));
    cpu->mmu = mmu;
    return cpu;
}

void destroy_cpu(struct cpu *cpu)
{
    free(cpu);
}

