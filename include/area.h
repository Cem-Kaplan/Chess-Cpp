#include <vector>

class CreateGame {
    std::vector<std::vector<char>> game_map;
    public:
        CreateGame();
        
        ~CreateGame();

        std::vector<std::vector<char>> getGame();
};