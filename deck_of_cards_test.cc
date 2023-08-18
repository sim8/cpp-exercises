#include "gtest/gtest.h"
#include "deck_of_cards.hpp"

TEST(DeckOfCards, Deals52CardsThenThrows) {
    DeckOfCards deckOfCards;

    for (int i = 0; i< 52; i++) {
        deckOfCards.dealCard();
    }

   EXPECT_THROW(deckOfCards.dealCard(), std::runtime_error);
}