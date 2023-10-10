#pragma once
#include "Grid.h"
#include <SFML/Graphics.hpp>

class Render {
private:
    const int BlockSize = 20; // px
    sf::RenderWindow& window; // Reference to SFML RenderWindow

public:
    // Constructor that takes an SFML RenderWindow reference
    Render(sf::RenderWindow& _window);

    // Function to draw the grid
    void Draw(const Grid& grid);

    // Function to get the block size
    int GetBlockSize(); // Include the return type here
};
