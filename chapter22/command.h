#ifndef DESIGNPATTERNS_COMMAND_H
#define DESIGNPATTERNS_COMMAND_H

class Command {
public:
    virtual void Execute() = 0;

    ~Command() = default;
};

#endif //DESIGNPATTERNS_COMMAND_H
