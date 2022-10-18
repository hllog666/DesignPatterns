#include "book_shelf.h"

#include <utility>
#include "book_shelf_iterator.h"

BookShelf::BookShelf(int maxSize) {
    books_ = new Book[maxSize];
}

BookShelf::~BookShelf() {
    delete books_;
}

Book BookShelf::GetBookAt(int index) {
    return books_[index];
}

void BookShelf::AppendBook(Book book) {
    books_[last_] = std::move(book);
    last_++;
}

int BookShelf::GetLength() const {
    return last_;
}

Iterator *BookShelf::GetIterator() {
    auto iterator = dynamic_cast<Iterator *>(new BookShelfIterator(this));
    return iterator;
}