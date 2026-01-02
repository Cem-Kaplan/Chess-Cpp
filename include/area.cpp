#include "area.h"
#include <vector>
#include <iostream>

CreateGame::CreateGame() {
    game_map = {
        {'!' , '?' , '%' , 'Q' , 'K' , '%' , '?' , '!'},
        {'b' , 'b' , 'b' , 'b' , 'b' , 'b' , 'b' , 'b'},
        {',' , ',' , ',' , ',' , ',' , ',' , ',' , ','},
        {',' , ',' , ',' , ',' , ',' , ',' , ',' , ','},
        {',' , ',' , ',' , ',' , ',' , ',' , ',' , ','},
        {',' , ',' , ',' , ',' , ',' , ',' , ',' , ','},
        {'b' , 'b' , 'b' , 'b' , 'b' , 'b' , 'b' , 'b'},
        {'!' , '?' , '%' , 'Q' , 'K' , '%' , '?' , '!'}
    };
}

CreateGame::~CreateGame() {
    std::cout << "Spiel Zu Ende" << std::endl;
}

std::vector<std::vector<char>> CreateGame::getGame() {
    return game_map;
}