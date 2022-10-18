#ifndef DESIGNPATTERNS_BOOK_H
#define DESIGNPATTERNS_BOOK_H

#include <string>

class Book {
public:
    Book() = default;

    explicit Book(std::string name);

    std::string GetName();

private:
    std::string name_;
};


#endif //DESIGNPATTERNS_BOOK_H
