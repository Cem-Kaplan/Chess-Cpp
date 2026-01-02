#include <vector>
#include <string>

class CreateGame {
    std::vector<std::vector<char>> game_map;
    public:
        CreateGame();
        
        ~CreateGame();

        std::vector<std::vector<char>> getGame();
};