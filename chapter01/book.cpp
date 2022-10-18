#include "book.h"
#include <utility>

Book::Book(std::string name) : name_(std::move(name)) {
}

std::string Book::GetName() {
    return name_;
}