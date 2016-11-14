#ifndef _GAMEBOY_H
#define _GAMEBOY_H

struct gameboy {
    struct cpu *cpu;
    struct screen *screen;
};

struct gameboy *create_gameboy(void);
void destroy_gameboy(struct gameboy *gb);
#endif
