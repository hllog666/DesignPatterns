#ifndef DESIGNPATTERNS_BOOK_SHELF_H
#define DESIGNPATTERNS_BOOK_SHELF_H

#include <vector>
#include "book.h"
#include "iterator.h"
#include "aggregate.h"

/**
 * ConcreteAggregate:负责实现Aggregate角色所定义的接口（API）
 */
class BookShelf : public Aggregate {
public:
    explicit BookShelf(int maxSize);

    ~BookShelf();

    Book GetBookAt(int index);

    void AppendBook(Book book);

    int GetLength() const;

    Iterator *GetIterator() override;

private:
    Book *books_;
    int last_ = 0;
};


#endif //DESIGNPATTERNS_BOOK_SHELF_H
