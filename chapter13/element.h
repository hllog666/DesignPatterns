#ifndef DESIGNPATTERNS_ELEMENT_H
#define DESIGNPATTERNS_ELEMENT_H

#include "visitor.h"

/**
 * Element：表示Visitor角色的访问对象。它声明了接受访问者的Accept方法
 * Accept方法接收到的参数是Visitor角色
 */
class Element {
public:
    virtual void Accept(Visitor *visitor) = 0;
};

#endif //DESIGNPATTERNS_ELEMENT_H
