#ifndef DESIGNPATTERNS_LIST_VISITOR_H
#define DESIGNPATTERNS_LIST_VISITOR_H

#include <iostream>
#include <string>
#include "visitor.h"
#include "file.h"
#include "directory.h"

/**
 * ConcreteVisitor：负责实现Visitor角色所定义的接口（API）
 */
class ListVisitor : public Visitor {
public:
    void Visit(File *file) override {
        std::cout << currentDir_ << "/" << file->ToString() << std::endl;
    }

    void Visit(Directory *directory) override {
        std::cout << currentDir_ << "/" << directory->ToString() << std::endl;
        std::string saveDir = currentDir_;
        currentDir_ = currentDir_ + "/" + directory->GetName();
        for (auto it = directory->GetIteratorBegin(); it != directory->GetIteratorEnd(); it++) {
            (*it)->Accept(this);
        }
        currentDir_ = saveDir;
    }

private:
    std::string currentDir_ = "";
};

#endif //DESIGNPATTERNS_LIST_VISITOR_H
