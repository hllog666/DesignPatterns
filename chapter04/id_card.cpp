#include <iostream>
#include "id_card.h"

IdCard::IdCard(std::string owner) {
    std::cout << "制作" << owner << "的ID卡。" << std::endl;
    owner_ = owner;
}

void IdCard::Use() {
    std::cout << "使用" << owner_ << "的ID卡。" << std::endl;
}

std::string IdCard::GetOwner() {
    return owner_;
}