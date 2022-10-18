#ifndef DESIGNPATTERNS_REPEAT_COMMAND_NODE_H
#define DESIGNPATTERNS_REPEAT_COMMAND_NODE_H

#include "node.h"

/**
 * NonTerminalExpression：对应BNF中的非终结符表达式
 */
class RepeatCommandNode : public Node {
public:
    void Parse(Context *context) override;

    std::string ToString() override;

private:
    int number_;
    Node *commandListNode_;
};

#endif //DESIGNPATTERNS_REPEAT_COMMAND_NODE_H
