//
// Created by Simeon Lees on 14/08/2023.
//

#include "deck_of_cards.hpp"
#include <stdexcept>

DeckOfCards::DeckOfCards() {
    // Populate the cards array with all 52 cards
    for (int suit = hearts; suit <= spades; ++suit) {
        for (int value = 1; value <= 13; ++value) {
            Card card;
            card.suit = static_cast<Suit>(suit);
            card.value = value;
            cards.push_back(card); // Add the card to the vector
        }
    }
}

Card DeckOfCards::dealCard() {
    if (cards.empty()) {
        throw std::runtime_error("Trying to deal card but cards empty");
    }

    Card card = cards.back();
    cards.pop_back();
    return card;
}