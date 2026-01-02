#include "Font.h"

Font::Font() : m_fontset(DEFAULT_FONTSET) {}

Font::~Font() {}

void Font::load(uint8_t fontset[]) {
	m_fontset = fontset;
}