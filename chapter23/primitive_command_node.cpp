#include "primitive_command_node.h"

void PrimitiveCommandNode::Parse(Context *context) {
    name_ = context->CurrentToken();
    context->SkipToken(name_);
    if (name_ != "go" && name_ != "right" && name_ != "left") {
        throw std::runtime_error(name_ + " is undefined");
    }
}

std::string PrimitiveCommandNode::ToString() {
    return name_;
}