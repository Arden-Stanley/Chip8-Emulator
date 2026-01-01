#ifndef MEMORY_H
#define MEMORY_H

#include <cstdint>

#define MEMORY_SIZE 0xFFF
#define MEMORY_START 0x000
#define MEMORY_CHAR_START 0x050
#define MEMORY_CHAR_END 0x0A0
#define MEMORY_MAIN_START 0x200
#define MEMROY_MAIN_END 0xFFF



class Memory {
private:   
	uint8_t m_data[MEMORY_SIZE];
	
public:
	Memory();
	~Memory();
};

#endif