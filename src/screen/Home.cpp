#include "Home.hpp"

void Home::initVariables()
{
    // Font Address
    font_address = "assets/fonts/Roboto-Regular.ttf";
}

void Home::initTexts()
{
    // Init Home Text
    home_text = new Texts("Home", font_address);
}

void Home::streamTexts()
{
    // Stream Home Text
    home_text->streamString("Home");
    home_text->setOrigin(home_text->getGlobalBounds().size / 2.0f);
    home_text->setPosition(sf::Vector2f{window_width / 2.0f, 50.0f});
}

Home::Home()
{
    initVariables();
    initTexts();
}

Home::~Home()
{
    delete home_text;
}

void Home::updateHome()
{
    streamTexts();
}

void Home::renderHome(sf::RenderWindow &window)
{
    window.draw(*home_text);
}
