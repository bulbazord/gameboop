#include <stdio.h>
#include <stdlib.h>

#include "gameboy.h"

int main(int argc, char *argv[])
{
    printf("Hello, gameboop!\n");

    // Create a gameboy
    struct gameboy *gb = create_gameboy();
    if (gb == NULL) {
        fprintf(stderr, "Failed to create a gameboy\n");
        exit(1);
    }

    destroy_gameboy(gb);
    printf("Thanks for playing!\n");

    return 0;
}

