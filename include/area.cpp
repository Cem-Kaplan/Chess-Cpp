#include "area.h"
#include <vector>
#include <iostream>

CreateGame::CreateGame() {
    game_map = {
        {'!', '#', '!'},
        {'0', '0', '0'},
        {'!', '#', '!'},
    };
}

CreateGame::~CreateGame() {
    std::cout << "Game Over" << std::endl;
}

std::vector<std::vector<char>> CreateGame::getGame() {
    return game_map;
}