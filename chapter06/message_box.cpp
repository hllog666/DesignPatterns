#include <iostream>
#include "message_box.h"

MessageBox::MessageBox(char decoChar) {
    decoChar_ = decoChar;
}

MessageBox::MessageBox(const MessageBox &messageBox) {
    decoChar_ = messageBox.decoChar_;
}

void MessageBox::Use(std::string s) {
    int length = s.size();
    for (int i = 0; i < length + 4; i++) {
        std::cout << decoChar_;
    }
    std::cout << std::endl;
    std::cout << decoChar_ << " " << s << " " << decoChar_ << std::endl;
    for (int i = 0; i < length + 4; i++) {
        std::cout << decoChar_;
    }
    std::cout << std::endl;
}

Product *MessageBox::CreateClone() {
    return new MessageBox(*this);
}