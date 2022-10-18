#ifndef DESIGNPATTERNS_FACTORY_H
#define DESIGNPATTERNS_FACTORY_H

#include <string>
#include "product.h"

/**
 * Creator：负责生成Product角色的抽象类，但具体的处理则由子类ConcreteCreator角色决定
 */
class Factory {
public:
    Product *Create(std::string owner) {
        Product *p = CreateProduct(owner);
        RegisterProduct(p);
        return p;
    }

protected:
    virtual Product *CreateProduct(std::string owner) = 0;

    virtual void RegisterProduct(Product *product) = 0;
};

#endif //DESIGNPATTERNS_FACTORY_H
