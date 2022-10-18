#ifndef DESIGNPATTERNS_UNDERLINE_PEN_H
#define DESIGNPATTERNS_UNDERLINE_PEN_H

#include <string>
#include "product.h"

/**
 * ConcretePrototype:负责实现复制现有实例并生成新实例的方法
 */
class UnderlinePen : public Product {
public:
    explicit UnderlinePen(char ulChar);

    UnderlinePen(const UnderlinePen &underlinePen);

    void Use(std::string s) override;

    Product *CreateClone() override;

private:
    char ulChar_;
};


#endif //DESIGNPATTERNS_UNDERLINE_PEN_H
