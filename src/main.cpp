#include <iostream>
#include "area.h"
#include <vector>

const std::string ANLEITUNG = "\n\n ! » Turm\n ? » Pferd\n % » läufer\n Q » Königing\n K » König\n b » bauer\n\n";
CreateGame game;
auto aktuelle_map = game.getGame();
char figur;

void zug() {

    int y_input;
    int x_input;

    std::cout << "\nFigur aussuchen\nx:";
    std::cin >> x_input;

    std::cout << "y:";
    std::cin >> y_input;

    if (x_input < 1 || x_input > 8 || y_input < 1 || y_input > 8) {
        std::cout << "Position ungültig" << std::endl;
        return zug();
    }

    y_input -= 1;
    x_input -= 1;

    figur = aktuelle_map.at(y_input).at(x_input);

    if (figur == ',') {
        std::cout << "sie wählten einen ungültigen punkt aus, nochmal versuchen" << std::endl;
        return zug();
    } else {
        y_input += 1;
        x_input += 1;
        std::cout << "Sie wählten aus: x: " << x_input << " y: " << y_input << "Figur: " <<  figur << std::endl;
    }
}

void bewegen() {
    std::cout << "wohin bewegen?" << std::endl;
    int bewegt_zu;
    std::cin >> bewegt_zu;


    if (figur == 'b') {
        if (bewegt_zu == 1) {
            
        } else {
            return bewegen()
        }
    }
}

void map_zeigen() {

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
}

int main() {
    std::cout << "Schach geladen" << ANLEITUNG;

    bool status = true;

    while (status) {
        
        map_zeigen();
        
        zug();
    }

    return 0;
}