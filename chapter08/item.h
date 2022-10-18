#ifndef DESIGNPATTERNS_ITEM_H
#define DESIGNPATTERNS_ITEM_H

#include <string>

class Item {
public:
    explicit Item(std::string caption) {
        caption_ = caption;
    }

    virtual std::string MakeHtml() = 0;

protected:
    std::string caption_;
};

#endif //DESIGNPATTERNS_ITEM_H
