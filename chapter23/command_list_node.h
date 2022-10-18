#ifndef DESIGNPATTERNS_COMMAND_LIST_NODE_H
#define DESIGNPATTERNS_COMMAND_LIST_NODE_H

#include <stdexcept>
#include <vector>
#include "node.h"

/**
 * NonTerminalExpression：对应BNF中的非终结符表达式
 */
class CommandListNode : public Node {
public:
    void Parse(Context *context) override;

    std::string ToString() override;

private:
    std::string PrintVector();

private:
    std::vector<Node *> list_;
};

#endif //DESIGNPATTERNS_COMMAND_LIST_NODE_H
