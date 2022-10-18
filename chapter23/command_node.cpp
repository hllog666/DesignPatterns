#include "command_node.h"
#include "repeat_command_node.h"
#include "primitive_command_node.h"

void CommandNode::Parse(Context *context) {
    if (context->CurrentToken() == "repeat") {
        node_ = new RepeatCommandNode();
        node_->Parse(context);
    } else {
        node_ = new PrimitiveCommandNode();
        node_->Parse(context);
    }
}

std::string CommandNode::ToString() {
    return node_->ToString();
}