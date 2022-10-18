#include "manager.h"

void Manager::Register(std::string name, Product *proto) {
    showcase_.insert(std::pair<std::string, Product *>(name, proto));
}

Product *Manager::Create(std::string protoName) {
    auto it = showcase_.find(protoName);
    return it->second->CreateClone();
}