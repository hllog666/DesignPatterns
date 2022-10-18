#ifndef DESIGNPATTERNS_MACRO_COMMAND_H
#define DESIGNPATTERNS_MACRO_COMMAND_H

#include <stack>
#include "command.h"

class MacroCommand : public Command {
public:
    void Execute() override {
        while (!commands_.empty()) {
            commands_.top()->Execute();
            commands_.pop();
        }
    }

    void Append(Command *cmd) {
        if (cmd != this) {
            commands_.push(cmd);
        }
    }

    void Undo() {
        if (!commands_.empty()) {
            commands_.pop();
        }
    }

    void Clear() {
        while (!commands_.empty()) {
            // Command *tmp = commands_.top();
            // delete tmp;
            commands_.pop();
        }
    }

private:
    std::stack<Command *> commands_;
};

#endif //DESIGNPATTERNS_MACRO_COMMAND_H
