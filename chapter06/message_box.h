#ifndef DESIGNPATTERNS_MESSAGE_BOX_H
#define DESIGNPATTERNS_MESSAGE_BOX_H

#include <string>
#include "product.h"

/**
 * ConcretePrototype:负责实现复制现有实例并生成新实例的方法
 */
class MessageBox : public Product {
public:
    explicit MessageBox(char decoChar);

    MessageBox(const MessageBox &messageBox);

    void Use(std::string s) override;

    Product *CreateClone() override;

private:
    char decoChar_;
};


#endif //DESIGNPATTERNS_MESSAGE_BOX_H
