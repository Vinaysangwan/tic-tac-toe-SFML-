#pragma once

#include "../fonts_texts/Texts.hpp"
#include "../game_manager/GameManager.h"

class Home
{
private:
    // Private Functions

    void initVariables();
    void initTexts();

    void streamTexts();

public:
    // Public Functions

    // Constructors & Destructors
    Home();
    ~Home();

    // Main Home Functions
    void updateHome();
    void renderHome(sf::RenderWindow &window);

private:
    // Private Members

    // Font Address
    std::string font_address;

    // Texts
    Texts *home_text;
};