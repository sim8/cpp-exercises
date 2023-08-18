#include <iostream>
#include "matrix.hpp"
#include "deck_of_cards.hpp"

consteval int tripleX(double x) {
    return x * 3.0;
}

int main() {
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
    matrixGame();
    return 0;
}

