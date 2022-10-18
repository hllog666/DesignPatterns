#include "command_list_node.h"
#include "command_node.h"

void CommandListNode::Parse(Context *context) {
    while (true) {
        if (context->CurrentToken() == "") {
            throw std::runtime_error("Missing 'end'");
        } else if (context->CurrentToken() == "end") {
            context->SkipToken("end");
            break;
        } else {
            Node *commandNode = new CommandNode();
            commandNode->Parse(context);
            list_.push_back(commandNode);
        }
    }
}

std::string CommandListNode::ToString() {
    return PrintVector();
}

std::string CommandListNode::PrintVector() {
    std::string ans;
    ans += "[";
    for (auto it = list_.begin(); it != list_.end(); it++) {
        if (it == list_.end() - 1) {
            ans += (*it)->ToString();
        } else {
            ans += (*it)->ToString() + " ";
        }
    }
    ans += "]";
    return ans;
}