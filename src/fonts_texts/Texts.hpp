#pragma once

#include <sstream>

#include "Fonts.hpp"

class Texts : public sf::Text
{
private:
    // Private Functions
    void initFont(std::string font_address);
    void initString(std::string str);

public:
    // Public Functions

    // Constructors & Destructors
    Texts(std::string str, std::string font_address);
    ~Texts();

    // Main Texts Functions
    void streamString(std::string str);
    void streamString_int(std::string str, int num);
    void streamString_font(std::string str, float num);

private:
    // Private Members

    // Original String
    std::string original_str;

    // Fonts
    Fonts *font;
};