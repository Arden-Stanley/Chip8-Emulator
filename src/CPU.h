#ifndef CPU_H
#define CPU_H

#include <cstdint>

#define NUM_REGISTERS 16

class CPU {
private:
	uint8_t m_registers[NUM_REGISTERS];
	uint16_t m_index;
	uint16_t m_pc;
public:
	CPU();
	~CPU();
};

#endif