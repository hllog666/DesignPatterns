#include <iostream>
#include "player.h"
#include "winning_strategy.h"
#include "prob_strategy.h"

int main() {
    Player *player1 = new Player("Taro", new WinningStrategy());
    Player *player2 = new Player("Hana", new ProbStrategy());
    for (int i = 0; i < 10; i++) {
        Hand *nextHand1 = player1->NextHand();
        Hand *nextHand2 = player2->NextHand();
        if (nextHand1->IsStrongerThan(nextHand2)) {
            player1->Win();
            player2->Lose();
            std::cout << "Winner:" << player1->ToString() << std::endl;
        } else if (nextHand2->IsStrongerThan(nextHand1)) {
            std::cout << "Winner:" << player2->ToString() << std::endl;
            player1->Lose();
            player2->Win();
        } else {
            std::cout << "Even..." << std::endl;
            player1->Even();
            player2->Even();
        }
    }
    std::cout << "Total result:" << std::endl;
    std::cout << player1->ToString() << std::endl;
    std::cout << player2->ToString() << std::endl;
    return 0;
}