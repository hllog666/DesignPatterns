#ifndef DESIGNPATTERNS_PRIMITIVE_COMMAND_NODE_H
#define DESIGNPATTERNS_PRIMITIVE_COMMAND_NODE_H

#include <stdexcept>
#include "node.h"

/**
 * TerminalExpression：对应BNF中的终结符表达式
 */
class PrimitiveCommandNode : public Node {
public:
    void Parse(Context *context) override;

    std::string ToString() override;

private:
    std::string name_;
};

#endif //DESIGNPATTERNS_PRIMITIVE_COMMAND_NODE_H
