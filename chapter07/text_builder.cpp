#include "text_builder.h"

void TextBuilder::MakeTitle(std::string title) {
    buff_ += "=================================\n";
    buff_ += "[" + title + "]\n";
    buff_ += "\n";
}

void TextBuilder::MakeString(std::string str) {
    buff_ += "+ " + str + "\n";
    buff_ += "\n";
}

void TextBuilder::MakeItems(std::string items[], int len) {
    for (int i = 0; i < len; i++) {
        buff_ += "  -" + items[i] + "\n";
    }
    buff_ += "\n";
}

void TextBuilder::Close() {
    buff_ += "=================================\n";
}

std::string TextBuilder::GetResult() {
    return buff_;
}