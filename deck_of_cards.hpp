//
// Created by Simeon Lees on 14/08/2023.
//

#ifndef CPP_EXERCISES_DECK_OF_CARDS_HPP
#define CPP_EXERCISES_DECK_OF_CARDS_HPP

#include <vector>

enum Suit {
    hearts,
    diamonds,
    clubs,
    spades
};

struct Card {
    Suit suit;
    int value; // Ace == 1, J,Q,K == 11,12,13
};

class DeckOfCards {
    std::vector<Card> cards;

public:
    DeckOfCards();

    Card dealCard();
};


#endif //CPP_EXERCISES_DECK_OF_CARDS_HPP
