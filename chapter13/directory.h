#ifndef DESIGNPATTERNS_DIRECTORY_H
#define DESIGNPATTERNS_DIRECTORY_H

#include <string>
#include <vector>
#include "entry.h"

/**
 * ConcreteElement：负责实现Element角色所定义的接口（API）
 * ObjectStructure：负责处理Element角色的集合
 */
class Directory : public Entry {
public:
    explicit Directory(std::string name) : name_(name) {}

    std::string GetName() override {
        return name_;
    }

    int GetSize() override {
        int size = 0;
        for (auto it = dir_.begin(); it != dir_.end(); it++) {
            size += (*it)->GetSize();
        }
        return size;
    }

    Entry *Add(Entry *entry) {
        dir_.push_back(entry);
        return this;
    }

    std::vector<Entry *>::iterator GetIteratorBegin() override {
        return dir_.begin();
    }

    std::vector<Entry *>::iterator GetIteratorEnd() override {
        return dir_.end();
    }

    void Accept(Visitor *visitor) override {
        visitor->Visit(this);
    }

private:
    std::string name_;
    std::vector<Entry *> dir_;
};

#endif //DESIGNPATTERNS_DIRECTORY_H
