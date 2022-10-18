#ifndef DESIGNPATTERNS_ENTRY_H
#define DESIGNPATTERNS_ENTRY_H

#include <string>

/**
 * Component：使Leaf角色和Composite角色具有一致性的角色。
 * Component角色是Leaf角色和Composite角色的父类
 */
class Entry {
public:
    virtual std::string GetName() {
        return "";
    };

    virtual int GetSize() {
        return 0;
    };

    virtual Entry *Add(Entry *entry) {
        return entry;
    };

    virtual void PrintList() {
        PrintList("");
    }

    virtual std::string ToString() {
        return GetName() + " (" + std::to_string(GetSize()) + ")\n";
    }

    virtual void PrintList(std::string prefix) {
    };
};

#endif //DESIGNPATTERNS_ENTRY_H
