#include "Game.h"
#include "Grid.h"
#include "Render.h"

Game::Game() {
    
    // Initialize the window and perform any other setup here
    //WindowSizeX = GetBlockSize() * TitlesAmountX;
   // WindowSizeX = GetBlockSize() * TitlesAmountX;
    window.create(sf::VideoMode(WindowSizeX, WindowSizeY), WindowText);
}

void Game::Run() {
    // Create a Grid object outside the loop if you want to maintain its state
    Grid g;
    Render r(window);
    // Game loop code
    while (window.isOpen()) {
        HandleEvents(); // Handle events

        window.clear(BackgroundColor);

        // Implement your game logic here:
        // - Generate (grid)
        // - Input (grid)
        // - Update (grid)

        // Render the grid
        
        r.Draw(g);

        // Draw (grid)

        window.display();
    }
}

void Game::HandleEvents() {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            window.close();
        }
        // Handle other events as needed

    }
}
