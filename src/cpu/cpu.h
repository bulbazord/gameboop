#ifndef _GAMEBOY_CPU_H
#define _GAMEBOY_CPU_H

#include <stdint.h>

#define NUM_REGS 8
#define REG_SIZE 8

#define REG_A 0
#define REG_F 1
#define REG_B 2
#define REG_C 3
#define REG_D 4
#define REG_E 5
#define REG_H 6
#define REG_L 7

#define C_BIT 0x10
#define H_BIT 0x20
#define N_BIT 0x40
#define Z_BIT 0x80

struct cpu {
    struct mmu *mmu;
    uint16_t pc;
    uint16_t sp;
    uint8_t registers[NUM_REGS];
    uint8_t flags;
};

struct cpu *create_cpu(struct mmu *mmu);
void destroy_cpu(struct cpu *cpu);

#endif
