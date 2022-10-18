#ifndef DESIGNPATTERNS_NODE_H
#define DESIGNPATTERNS_NODE_H

#include <string>
#include "context.h"

/**
 * AbstractExpression:定义了语法树节点的共同接口（API）
 */
class Node {
public:
    virtual void Parse(Context *context) = 0;

    virtual std::string ToString() = 0;
};

#endif //DESIGNPATTERNS_NODE_H
