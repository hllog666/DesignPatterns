#ifndef DESIGNPATTERNS_FULL_BORDER_H
#define DESIGNPATTERNS_FULL_BORDER_H

#include "border.h"

class FullBorder : public Border {
public:
    explicit FullBorder(Display *display) : Border(display) {}

    int GetColumns() override {
        return 1 + display_->GetColumns() + 1;
    }

    int GetRows() override {
        return 1 + display_->GetRows() + 1;
    }

    std::string GetRowText(int row) override {
        if (row == 0) {
            return "+" + MakeLine('-', display_->GetColumns()) + "+";
        } else if (row == display_->GetRows() + 1) {
            return "+" + MakeLine('-', display_->GetColumns()) + "+";
        } else {
            return "|" + display_->GetRowText(row - 1) + "|";
        }
    }

private:
    std::string MakeLine(char ch, int count) {
        std::string buff;
        for (int i = 0; i < count; i++) {
            buff += ch;
        }
        return buff;
    }
};

#endif //DESIGNPATTERNS_FULL_BORDER_H
