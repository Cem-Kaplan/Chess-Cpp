#include <iostream>
#include "area.h"
#include <vector>

int main() {
    std::cout << "Schach geladen" << std::endl;
    CreateGame game;
    auto aktuelle_map = game.getGame();

    for (int y = 0; y < aktuelle_map.size(); y++) {
        std::cout << y << ". " << std::endl;

        for (int x = 0; x < aktuelle_map[y].size(); x++) {
            std::cout << aktuelle_map[y][x] << std::endl;
        }
    }

    return 0;
}