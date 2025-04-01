#pragma once

#include <string.h>

// Screens
#include "../screen/Home.hpp"
#include "../screen/Play.hpp"

#include "../game_manager/GameManager.h"

class Game
{
private:
    // Private Functions

    // Init Functions
    void initVariables();
    void initWindow();
    void initScreens();

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
    sf::VideoMode vm;       // Video Mode
    std::string title;      // Title
    sf::Color window_color; // Color

    // Window
    sf::RenderWindow *window;

    // Screens
    Home *home_screen; // Home Screen
    Play *play_screen; // Play Screen
};