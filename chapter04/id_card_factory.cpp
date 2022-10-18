#include "id_card_factory.h"

Product *IdCardFactory::CreateProduct(std::string owner) {
    return new IdCard(owner);
}

void IdCardFactory::RegisterProduct(Product *product) {
    owners_.push_back(dynamic_cast<IdCard *>(product)->GetOwner());
}

std::vector<std::string> IdCardFactory::GetOwners() {
    return owners_;
}