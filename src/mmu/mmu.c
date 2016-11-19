#include <stdlib.h>
#include "mmu.h"

struct mmu *create_mmu()
{
    struct mmu *mmu = malloc(sizeof(struct mmu));
    mmu->read_byte = read_byte;
    return mmu;
}

void destroy_mmu(struct mmu *mmu)
{
    free(mmu);
}

uint8_t read_byte(uint16_t address)
{
    (void)address;
    return 0;
}

