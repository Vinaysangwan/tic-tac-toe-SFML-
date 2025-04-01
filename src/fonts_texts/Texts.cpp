#include "Texts.hpp"

void Texts::initFont(std::string font_address)
{
    // Init Font
    font = new Fonts(font_address);
    this->setFont(*font);
}

void Texts::initString(std::string str)
{
    // Init String
    original_str = str;
    this->setString(str);
}

Texts::Texts(std::string str, std::string font_address)
    : sf::Text(*font)
{
    initFont(font_address);
    initString(str);
}

Texts::~Texts()
{
    delete font;
}

void Texts::streamString(std::string str)
{
    this->setString(str);
}

void Texts::streamString_int(std::string str, int num)
{
    std::stringstream sstring;
    sstring << str << num;
    this->setString(sstring.str());
}

void Texts::streamString_font(std::string str, float num)
{
    std::stringstream sstring;
    sstring << str << num;
    this->setString(sstring.str());
}
