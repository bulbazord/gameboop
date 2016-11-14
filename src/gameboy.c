#include <stdlib.h>

#include "gameboy.h"

struct gameboy *create_gameboy()
{
    struct gameboy *gb = malloc(sizeof(struct gameboy));
    return gb;
}

void destroy_gameboy(struct gameboy *gb)
{
    free(gb);
}

