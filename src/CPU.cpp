#include "CPU.h"

uint32_t CPU::read_register(Register reg) {
    return m_register_file[reg];
}

void CPU::write_register(Register reg, uint32_t value) {
    m_register_file[reg] = value;
}

uint32_t CPU::read_instr_memory(uint32_t index) {
    uint8_t b1 = m_instruction_memory[index];
    uint8_t b2 = m_instruction_memory[index + 1];
    uint8_t b3 = m_instruction_memory[index + 2];
    uint8_t b4 = m_instruction_memory[index + 3];

    uint32_t to_return = b4 | (b3 << 8) | (b2 << 16) | (b1 << 24);
    return to_return;
}

void CPU::opcode_control(const Instruction& instruction) {
    
}