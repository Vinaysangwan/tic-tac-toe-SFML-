#pragma once

#include "../common.hpp"
#include <string.h>

class Game
{
private:
    // Private Functions

    // Init Functions
    void initVariables();
    void initWindow();

public:
    // Public Functions

    // Constructors & Destructors
    Game();
    ~Game();

    // Main Game Functions
    void pollEvent();
    void update();
    void render();

    // Return Function
    bool isRunning() const;

private:
    // Private Members

    // Window Stats
    unsigned int window_width;  // Width
    unsigned int window_height; // Height
    sf::VideoMode vm;           // Video Mode
    std::string title;          // Title
    sf::Color window_color;     // Color

    // Window
    sf::RenderWindow *window;
};