#include "trouble.h"
#include "support.h"
#include "no_support.h"
#include "limit_support.h"
#include "odd_support.h"
#include "special_support.h"

/**
 * Client：向第一个ConcreteHandler角色发送请求的角色
 * @return 程序的运行状态
 */
int main() {
    Support *alice = new NoSupport("Alice");
    Support *bob = new LimitSupport("Bob", 100);
    Support *charlie = new SpecialSupport("Charlie", 429);
    Support *diana = new LimitSupport("Diana", 200);
    Support *elmo = new OddSupport("Elmo");
    Support *fred = new LimitSupport("Fred", 300);
    alice->SetNext(bob)->SetNext(charlie)->SetNext(diana)->SetNext(elmo)->SetNext(fred);
    for (int i = 0; i < 500; i += 33) {
        alice->SupportService(new Trouble(i));
    }
    return 0;
}