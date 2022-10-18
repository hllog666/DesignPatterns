#ifndef DESIGNPATTERNS_PROGRAM_NODE_H
#define DESIGNPATTERNS_PROGRAM_NODE_H

#include <string>
#include "node.h"
#include "command_list_node.h"

/**
 * NonTerminalExpression：对应BNF中的非终结符表达式
 */
class ProgramNode : public Node {
public:
    void Parse(Context *context) override {
        context->SkipToken("program");
        commandListNode_ = new CommandListNode();
        commandListNode_->Parse(context);
    }

    std::string ToString() override {
        return "[program " + commandListNode_->ToString() + "]";
    }

private:
    Node *commandListNode_;
};

#endif //DESIGNPATTERNS_PROGRAM_NODE_H
