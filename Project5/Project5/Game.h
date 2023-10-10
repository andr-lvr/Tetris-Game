#pragma once
#include "SFML/Graphics.hpp"
#include <string>
using namespace sf;


class Game {
private:


    RenderWindow window;
    void HandleEvents(); // Function to handle events

    int WindowSizeX = 800;
    int WindowSizeY = 600;
    std::string WindowText = "Game Text Here!";
    const Color BackgroundColor = Color(226, 228, 254);
    

public:
    Game();
    void Run();
};
