#pragma once

#include <iostream>

#include "../common.hpp"

class Fonts : public sf::Font
{
private:
    // Private Functions
    void initFont(std::string font_address);

public:
    // Public Functions

    // Constructors & Destructors
    Fonts(std::string font_address);
    ~Fonts();

    // Main Fonts Functions

private:
    // Private Members
};