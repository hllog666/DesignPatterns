#ifndef DESIGNPATTERNS_FILE_H
#define DESIGNPATTERNS_FILE_H

#include <string>
#include "entry.h"

/**
 * Leaf:表示内容的角色。在该角色中不能放入其他对象
 */
class File : public Entry {
public:
    explicit File(std::string name, int size) {
        name_ = name;
        size_ = size;
    }

    std::string GetName() override {
        return name_;
    }

    int GetSize() override {
        return size_;
    }

    void PrintList() override {
        PrintList("");
    }

protected:
    void PrintList(std::string prefix) override {
        std::cout << prefix << "/" << this->ToString();
    }

private:
    std::string name_;
    int size_;
};

#endif //DESIGNPATTERNS_FILE_H
