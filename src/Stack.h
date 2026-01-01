#ifndef STACK_H
#define STACK_H

#include <cstdint>
#include <iostream>

#define STACK_MAX_SIZE 16

class Stack {
private:
	uint16_t m_pc[STACK_MAX_SIZE];
	uint8_t m_sp;
public:
	Stack();
	~Stack();
	void push(uint16_t pc);
	void pop();
};

#endif