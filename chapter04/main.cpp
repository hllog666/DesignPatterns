#include "factory.h"
#include "product.h"
#include "id_card_factory.h"

int main() {
    Factory *factory = new IdCardFactory();
    Product *card1 = factory->Create("小明");
    Product *card2 = factory->Create("小红");
    Product *card3 = factory->Create("小刚");
    card1->Use();
    card2->Use();
    card3->Use();
    return 0;
}