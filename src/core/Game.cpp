#include "Game.hpp"

//*********************************************************************************************
//************************************** Private Functions ************************************
//*********************************************************************************************

// Initialize all the Variables
void Game::initVariables()
{
    // Set Window VideoMode
    vm.size.x = window_width;
    vm.size.y = window_height;

    // Set Game Title
    title = "Tic Tac Toe";

    // Set Window
    window_color = sf::Color(86, 86, 86);
}

// Initialize the Window
void Game::initWindow()
{
    // Init Window
    window = new sf::RenderWindow(vm, title, sf::Style::Close | sf::Style::Titlebar);

    // Set Window Position
    window->setPosition(sf::Vector2i{window->getPosition().x, 50});

    // Limit the Window Frame Rate
    window->setFramerateLimit(60);
}

// Initialize all the Screens
void Game::initScreens()
{
    // Init Home Screen
    home_screen = new Home();

    // Init Play Screen
    play_screen = new Play();
}

//*********************************************************************************************
//****************************** Constructor & Destructor *************************************
//*********************************************************************************************

// Constructor
Game::Game()
{
    initVariables();
    initWindow();
    initScreens();
}

// Destructor
Game::~Game()
{
    // Cleanup
    delete home_screen;
    delete play_screen;
    delete window;
}

//*********************************************************************************************
//************************************** Public Functions *************************************
//*********************************************************************************************

// Handle Window Event
void Game::pollEvent()
{
    // Event Loop
    while (const std::optional event = window->pollEvent())
    {
        if (event->is<sf::Event::Closed>())
        {
            window->close();
            break;
        }

        if (const auto *key_pressed = event->getIf<sf::Event::KeyPressed>())
        {
            if (key_pressed->scancode == sf::Keyboard::Scancode::Escape)
            {
                window->close();
                break;
            }
        }
    }
}

// Update Function of the Game
void Game::update()
{
    // Call Poll Evnet Function
    pollEvent();

    switch (game_screen)
    {
    case home:
        home_screen->updateHome();
        break;

    case play:
        play_screen->updatePlay();
        break;
    }
}

// Render Function of the Game
void Game::render()
{
    // Set Window Color in the Clear
    window->clear(window_color);

    // Draw to render in the window
    switch (game_screen)
    {
    case home:
        home_screen->renderHome(*window);
        break;

    case play:
        play_screen->renderPlay(*window);
        break;
    }

    window->display();
}

// Checking for window->isOpen()
bool Game::isRunning() const
{
    if (window->isOpen())
    {
        return true;
    }
    else
    {
        return false;
    }
}
