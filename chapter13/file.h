#ifndef DESIGNPATTERNS_FILE_H
#define DESIGNPATTERNS_FILE_H

#include <string>
#include "entry.h"
#include "visitor.h"

/**
 * ConcreteElement：负责实现Element角色所定义的接口（API）
 */
class File : public Entry {
public:
    explicit File(std::string name, int size) : name_(name), size_(size) {}

    std::string GetName() override {
        return name_;
    }

    int GetSize() override {
        return size_;
    }

    void Accept(Visitor *visitor) override {
        visitor->Visit(this);
    }

private:
    std::string name_;
    int size_;
};

#endif //DESIGNPATTERNS_FILE_H
