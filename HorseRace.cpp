#include <iostream>
#include <cstdlib>
#include <ctime>

const int amountHorse = 6;
const int traLen = 10;

void advance(int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int* horses);
void resetHorses(int* horses);

int main() {
    srand(time(NULL));

    int horses[amountHorse] = {0};

    while (true) {
        advance(horses);

        for (int i = 0; i < amountHorse; i++) {
            printLane(i, horses);
        }

        if (isWinner(horses)) {
            std::cout << "\nWinner! Press Enter to start a new race...";
            std::cin.ignore();
            std::cin.get();
            resetHorses(horses);
        }

        std::cin.get(); // pause between turns
    }
}

void advance(int* horses) {
    for (int i = 0; i < amountHorse; i++) {
        horses[i] += rand() % 2;
        if (horses[i] > traLen)
            horses[i] = traLen;
    }
}

void printLane(int horseNum, int* horses) {
    for (int j = 0; j < traLen; j++) {
        if (j == horses[horseNum])
            std::cout << horseNum;
        else
            std::cout << "|";
    }
    std::cout << std::endl;
}

bool isWinner(int* horses) {
    for (int i = 0; i < amountHorse; i++) {
        if (horses[i] >= traLen)
            return true;
    }
    return false;
}

void resetHorses(int* horses) {
    for (int i = 0; i < amountHorse; i++) {
        horses[i] = 0;
    }
}