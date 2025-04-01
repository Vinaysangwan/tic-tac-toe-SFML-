#include "Fonts.hpp"

void Fonts::initFont(std::string font_address)
{
    if (!this->openFromFile(font_address))
    {
        std::cerr << "ERROR:FONTS::INITFONT::coudn't load font from the file" << std::endl;
    }

    this->setSmooth(false);
}

Fonts::Fonts(std::string font_address)
{
    initFont(font_address);
}

Fonts::~Fonts()
{
}
