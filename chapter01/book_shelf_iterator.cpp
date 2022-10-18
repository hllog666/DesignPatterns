#include "book_shelf_iterator.h"

BookShelfIterator::BookShelfIterator(BookShelf *bookShelf) : bookShelf_(bookShelf), index_(0) {
}

BookShelfIterator::~BookShelfIterator() {
    delete bookShelf_;
}

bool BookShelfIterator::HasNext() {
    if (index_ < bookShelf_->GetLength()) {
        return true;
    }
    return false;
}
