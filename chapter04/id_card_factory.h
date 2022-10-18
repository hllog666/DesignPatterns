#ifndef DESIGNPATTERNS_ID_CARD_FACTORY_H
#define DESIGNPATTERNS_ID_CARD_FACTORY_H

#include <vector>
#include "factory.h"
#include "id_card.h"

/**
 * ConcreteCreator：负责生成具体的产品
 */
class IdCardFactory : public Factory {
public:
    Product *CreateProduct(std::string owner) override;

    void RegisterProduct(Product *product) override;

    std::vector<std::string> GetOwners();

private:
    std::vector<std::string> owners_;
};


#endif //DESIGNPATTERNS_ID_CARD_FACTORY_H
