#ifndef DESIGNPATTERNS_BOOK_SHELF_ITERATOR_H
#define DESIGNPATTERNS_BOOK_SHELF_ITERATOR_H

#include "iterator.h"
#include "book_shelf.h"

/**
 * ConcreteIterator:负责实现Iterator角色所定义的接口（API）
 */
class BookShelfIterator : public Iterator {
public:
    explicit BookShelfIterator(BookShelf *bookShelf);

    ~BookShelfIterator();

    bool HasNext() override;

    template<class T>
    T Next();

private:
    BookShelf *bookShelf_;
    int index_;
};

template<class T>
T BookShelfIterator::Next() {
    Book book = bookShelf_->GetBookAt(index_);
    index_++;
    return book;
}

#endif //DESIGNPATTERNS_BOOK_SHELF_ITERATOR_H
