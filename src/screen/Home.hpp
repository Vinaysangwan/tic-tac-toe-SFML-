#pragma once

#include "../common.hpp"

class Home
{
private:
    // Private Functions

    void initVariables();

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
};