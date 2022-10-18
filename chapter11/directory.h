#ifndef DESIGNPATTERNS_DIRECTORY_H
#define DESIGNPATTERNS_DIRECTORY_H

#include <vector>
#include "entry.h"

/**
 * Composite:表示容器的角色。可以在其中放入Leaf角色和Composite角色
 */
class Directory : public Entry {
public:
    explicit Directory(std::string name) {
        name_ = name;
    }

    std::string GetName() override {
        return name_;
    }

    int GetSize() override {
        int size = 0;
        for (auto it = directory_.begin(); it != directory_.end(); it++) {
            size += (*it)->GetSize();
        }
        return size;
    }

    Entry *Add(Entry *entry) override {
        directory_.push_back(entry);
        return this;
    }

    void PrintList() override {
        PrintList("");
    }

protected:
    void PrintList(std::string prefix) override {
        std::cout << prefix << "/" << this->ToString();
        for (auto it = directory_.begin(); it != directory_.end(); it++) {
                (*it)->PrintList(prefix + std::string("/") + name_);
        }
    }

private:
    std::string name_;
    std::vector<Entry *> directory_;
};

#endif //DESIGNPATTERNS_DIRECTORY_H
