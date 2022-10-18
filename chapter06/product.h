#ifndef DESIGNPATTERNS_PRODUCT_H
#define DESIGNPATTERNS_PRODUCT_H

#include <string>

/**
 * Prototype：负责定义用于复制现有实例来生成新实例的方法
 */
class Product {
public:
    virtual void Use(std::string s) {

    };

    virtual Product *CreateClone() {

    };
};

#endif //DESIGNPATTERNS_PRODUCT_H
