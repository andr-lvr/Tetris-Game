#pragma once
#include <vector>

const int TitlesAmountX = 12;
const int TitlesAmountY = 20;

class Grid {
private:
    std::vector<std::vector<bool>> grid;

public:
    Grid();
    void Set(int y, int x, bool a);
    bool Get(int y, int x) const;
};
