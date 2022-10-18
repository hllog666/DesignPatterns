#ifndef DESIGNPATTERNS_PAGE_H
#define DESIGNPATTERNS_PAGE_H

#include <fstream>
#include <string>
#include <vector>
#include "item.h"

/**
 * AbstractProduct:负责定义AbstractFactory角色所生成的抽象零件和产品的接口（API）
 */
class Page {
public:
    explicit Page(std::string title, std::string author) : title_(title), author_(author) {
    }

    void Add(Item *item) {
        content_.push_back(item);
    }

    void Output() {
        std::string filename = title_ + ".html";
        std::ofstream ofs;
        ofs.open(filename, std::ios::out | std::ios::trunc);
        ofs << MakeHtml();
        ofs.close();
    }

    virtual std::string MakeHtml() = 0;

protected:
    std::string title_;
    std::string author_;
    std::vector<Item *> content_;
};

#endif //DESIGNPATTERNS_PAGE_H
