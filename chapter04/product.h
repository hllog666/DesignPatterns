#ifndef DESIGNPATTERNS_PRODUCT_H
#define DESIGNPATTERNS_PRODUCT_H

/**
 * Product:定义了在Factory Method模式中生成的那些实例所持有的接口（API），
 * 但具体的处理则由子类ConcreteProduct角色决定
 */
class Product {
public:
    virtual void Use() = 0;
};

#endif //DESIGNPATTERNS_PRODUCT_H
