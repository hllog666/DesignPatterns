#include "repeat_command_node.h"
#include "command_list_node.h"

void RepeatCommandNode::Parse(Context *context) {
    context->SkipToken("repeat");
    number_ = context->CurrentNumber();
    context->NextToken();
    commandListNode_ = new CommandListNode();
    commandListNode_->Parse(context);
}

std::string RepeatCommandNode::ToString() {
    return "[repeat " + std::to_string(number_) + " " + commandListNode_->ToString() + "]";
}