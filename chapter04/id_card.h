#ifndef DESIGNPATTERNS_ID_CARD_H
#define DESIGNPATTERNS_ID_CARD_H

#include <string>
#include "product.h"

/**
 * ConcreteProduct：决定了具体的产品
 */
class IdCard : public Product {
public:
    explicit IdCard(std::string owner);

    void Use() override;

    std::string GetOwner();

private:
    std::string owner_;
};


#endif //DESIGNPATTERNS_ID_CARD_H
