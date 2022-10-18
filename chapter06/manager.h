#ifndef DESIGNPATTERNS_MANAGER_H
#define DESIGNPATTERNS_MANAGER_H

#include <map>
#include <string>
#include "product.h"

/**
 * Client:负责使用复制实例的方法生成新的实例
 */
class Manager {
public:
    void Register(std::string name, Product *proto);

    Product *Create(std::string protoName);

private:
    std::map<std::string, Product*> showcase_;
};


#endif //DESIGNPATTERNS_MANAGER_H
