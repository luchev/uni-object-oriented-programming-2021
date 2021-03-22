#include <iostream>

enum class CardType {
    CARD_MONSTER = 0,
    CARD_MAGIC = 1
};

int main() {
    CardType cardType = CardType::CARD_MAGIC;

    if (cardType == CardType::CARD_MAGIC) {
        // do something
    } else {
        // other
    }
}
