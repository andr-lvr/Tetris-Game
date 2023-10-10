#include "Grid.h"

Grid::Grid() {
    grid.resize(TitlesAmountY, std::vector<bool>(TitlesAmountX, false));
}

void Grid::Set(int y, int x, bool a) {
    if (y >= 0 && y < TitlesAmountY && x >= 0 && x < TitlesAmountX) {
        grid[y][x] = a;
    }
    // Handle out-of-bounds access here if needed
}

bool Grid::Get(int y, int x) const {
    if (y >= 0 && y < TitlesAmountY && x >= 0 && x < TitlesAmountX) {
        return grid[y][x];
    }
    // Handle out-of-bounds access here if needed
    return false;
}
