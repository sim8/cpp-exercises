#include <iostream>
#include "matrix.hpp"
#include "deck_of_cards.hpp"

consteval int tripleX(double x) {
    return x * 3.0;
}

void randomTesting() {
    DeckOfCards deck;
    Card wowza = deck.dealCard();
    int someArr[tripleX(4)] = {3,4};
    int* arrItem = &someArr[1];
    int wow = *arrItem;
    int dna = 4;
    int& dang = dna;

    std::cout << "Your card is";
    std::cout << wowza.suit;
    std::cout << wowza.value;
    std::cout << std::endl;
    std::cout << someArr;
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Hello, World!" << std::endl;
}

void selectProgram() {
    std::cout << R"(Select your program! Type one of the following:)" << std::endl;
    std::cout << R"("m": Matrix)" << std::endl;
    std::cout << R"("t": testing)" << std::endl;
    std::cout << R"("q": quit)" << std::endl;
    std::string choice;
    std::cin >> choice;
    if (choice == "m") {
        matrixGame();
    } else if (choice == "t") {
        randomTesting();
    } else if (choice == "q") {
        return;
    }
    selectProgram();
}

int main() {
    selectProgram();
    return 0;
}

