#ifndef CHIP8_H
#define CHIP8_H
#include "Memory.h"
#include "CPU.h"

class Chip8 {
private:
	Memory m_memory;
	CPU m_cpu;
public:
	Chip8();
	~Chip8();
};

#endif