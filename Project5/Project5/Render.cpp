#include "Render.h"
#include <SFML/Graphics.hpp>
#include "Grid.h"

// Constructor implementation
Render::Render(sf::RenderWindow& _window) : window(_window) {}

// Function to draw the grid implementation
void Render::Draw(const Grid& grid) {
    for (int y = 0; y < TitlesAmountY; y++) {
        for (int x = 0; x < TitlesAmountX; x++) {
            sf::RectangleShape block(sf::Vector2f(BlockSize, BlockSize));
            block.setPosition(x * BlockSize, y * BlockSize);
            if (grid.Get(y, x)) { // Assuming a Get function to access grid elements
                block.setFillColor(sf::Color::Green); // Set color for true cells
            }
            else {
                block.setFillColor(sf::Color::White); // Set color for false cells
            }
            window.draw(block);
        }
    }
}

// Function to get the block size
int Render::GetBlockSize() {
    return BlockSize;
}
