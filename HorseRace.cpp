#include <iostream>
#include <cstdlib>
#include <ctime>

//Variables
const int amountHorse = 6;
const int traLen = 10;
void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

int main() {
    srand(time(NULL));
    //Variables
    int horses[amountHorse] = {0, 0, 0, 0, 0};

    //Prints the track for every horse number
    for (int i = 1; i < amountHorse; i++) {
        printLane(i, horses);
    };

    //Kills the function
    return 0;
};




bool isWinner(int horseNum, int* horses) {
    int userIn;
    if (horses[horseNum] == traLen) {
        std::cout << "Press Enter To Start A New Match: ";
        std::cin >> userIn;
        return 0;
    }
    else {
        std::cout << "Press Enter To Continues: ";
        std::cin >> userIn;
        for (int i = 1; i < amountHorse; i++) {
            printLane(i, horses);
        };
    }
};

void advance(int horseNum, int* horses) {
    int coin = rand() % 2;
    std::cout << coin << std::endl;
    horses[horseNum] += coin;
    //horses[horseNum - 1] = coin + horses[horseNum - 1];
    //std::cout << "Horse #: " << horses[horseNum] << " Position: " << horses[horseNum - 1];
   // std::cout <<std::endl;
   if (horseNum == 5) { 
    isWinner(horseNum, horses);
   }
   else {
    std::cout<<"didntwork" << horseNum<< std::endl;
   };
};

//Function to print out each lane
void printLane(int horseNum, int* horses) {

    //Loops to add in the lanes and the postiiton of the horses
    for (int j = 0; j < traLen; j++) {

        //Checks to see if the horse is in that position
        if (j == horses[horseNum]){

            //Prints the horses number
            std::cout << horseNum;
        }

        //If not then print out -
        else {
            std::cout << "|";
        };
    };
    std::cout << std::endl;
    advance(horseNum, horses);
};