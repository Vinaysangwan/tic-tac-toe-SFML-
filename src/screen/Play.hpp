#pragma once

#include "../common.hpp"

class Play
{
private:
    // Private Functions
    void initVariables();

public:
    // Public Functions

    // Constructors & Destructors
    Play();
    ~Play();

    // Main Play Functions
    void updatePlay();
    void renderPlay(sf::RenderWindow &window);

private:
    // Private Members
};