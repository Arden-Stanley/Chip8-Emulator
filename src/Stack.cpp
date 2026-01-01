#include "Stack.h"

Stack::Stack() : m_pc{0}, m_sp(0) {}

Stack::~Stack() {}

void Stack::push(uint16_t pc) {
	if (m_sp != STACK_MAX_SIZE - 1) {
		m_sp += 1;
		m_pc[m_sp] = pc;
	}
	else {
		std::cerr << "ERROR: Max Stack Depth Reached, Cannot Push." << std::endl;
	}
}

void Stack::pop() {
	if (m_sp != 0) {
		m_pc[m_sp] = 0;
		m_sp -= 1;
	}
	else {
		std::cerr << "ERROR: Minimum Stack Depth Reached, Cannot Pop." << std::endl;
	}
}