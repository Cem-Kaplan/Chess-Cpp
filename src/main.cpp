#include <iostream>
#include "area.h"
#include <vector>

const std::string ANLEITUNG = "\n\n ! » Turm\n ? » Pferd\n % » läufer\n Q » Königing\n K » König\n b » bauer\n\n";
CreateGame game;
auto aktuelle_map = game.getGame();

void zug() {

        int y_input;
        int x_input;
        char figur = ','; // , bedeutet frei/nix

        std::cout << "\nFigur aussuchen\nx:";
        std::cin >> x_input;
        x_input -= 1;

        std::cout << "y:";
        std::cin >> y_input;
        y_input -= 1;

        figur = aktuelle_map[y_input][x_input];

        if (figur == ',') {
            std::cout << "sie wählten einen ungültigen punkt aus" << std::endl;
        } else {
            std::cout << "Sie wählten aus: x: " << x_input << " y: " << y_input << "Figur: " <<  figur << std::endl;
        }

}

int main() {
    std::cout << "Schach geladen" << ANLEITUNG;

    bool status = true;

    while (status) {
        
        std::cout << "nr _12345678_" << std::endl;

        for (int y = 0; y < aktuelle_map.size(); y++) {
            std::cout << y + 1 << ". |";

            for (int x = 0; x < aktuelle_map[y].size(); x++) {
                std::cout << aktuelle_map[y][x];
                if (x == 7) {
                    std::cout << "|" << std::endl;
                }
            }
        }
        zug();
    }

    return 0;
}