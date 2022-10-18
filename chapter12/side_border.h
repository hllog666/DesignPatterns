#ifndef DESIGNPATTERNS_SIDE_BORDER_H
#define DESIGNPATTERNS_SIDE_BORDER_H

#include "border.h"

/**
 * ConcreteDecorator:具体的Decorator角色
 */
class SideBorder : public Border {
public:
    explicit SideBorder(Display *display, char ch) : Border(display), borderChar_(ch) {
    }

    int GetColumns() override {
        return 1 + display_->GetColumns() + 1;
    }

    int GetRows() override {
        return display_->GetRows();
    }

    std::string GetRowText(int row) override {
        return borderChar_ + display_->GetRowText(row) + borderChar_;
    }

private:
    char borderChar_;
};

#endif //DESIGNPATTERNS_SIDE_BORDER_H
