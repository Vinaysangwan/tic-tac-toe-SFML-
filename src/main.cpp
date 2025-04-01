#include "core/Game.hpp"

int main()
{
    Game *game = new Game();

    // Game Loop
    while (game->isRunning())
    {
        game->update();

        game->render();
    }

    delete game;
    return 0;
}