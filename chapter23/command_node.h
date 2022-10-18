#ifndef DESIGNPATTERNS_COMMAND_NODE_H
#define DESIGNPATTERNS_COMMAND_NODE_H

#include "node.h"

/**
 * NonTerminalExpression：对应BNF中的非终结符表达式
 */
class CommandNode : public Node {
public:
    void Parse(Context *context) override;

    std::string ToString() override;

private:
    Node *node_;
};

#endif //DESIGNPATTERNS_COMMAND_NODE_H
