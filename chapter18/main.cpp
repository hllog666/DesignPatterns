#include <iostream>
#include "gamer.h"
#include "memento.h"

/**
 * Caretaker：当Caretaker想要保存当前的Originator角色的状态时，会通知Originator角色角色。
 * Originator角色在接收到通知后会生成Memento角色的实例并将其返回给Caretaker角色。
 * Caretaker角色会一直保存Memento实例
 * @return
 */
int main() {
    Gamer *gamer = new Gamer(100);
    Memento *memento = gamer->CreateMemento();
    for (int i = 0; i < 100; i++) {
        std::cout << "====" << i << std::endl;
        std::cout << "当前状态：" << gamer->ToString() << std::endl;
        gamer->Bet();
        std::cout << "所持金钱为" << gamer->GetMoney() << "元。" << std::endl;
        if (gamer->GetMoney() > memento->GetMoney()) {
            std::cout << "（所持金钱增加了许多，因此保存游戏当前的状态）" << std::endl;
            memento = gamer->CreateMemento();
        } else if (gamer->GetMoney() < memento->GetMoney() / 2) {
            std::cout << "(所持金钱减少了许多，因此将游戏恢复至以前的状态)" << std::endl;
            gamer->RestoreMemento(memento);
        }
        std::cout << std::endl;
    }
    return 0;
}