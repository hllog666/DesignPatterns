#include <iostream>
#include "book.h"
#include "book_shelf.h"
#include "book_shelf_iterator.h"

int main() {
    auto bookShelf = new BookShelf(4);
    Book *book1 = new Book("Around the World in 80 Days");
    Book *book2 = new Book("Bible");
    Book *book3 = new Book("Cinderella");
    Book *book4 = new Book("Daddy-Long-Legs");
    bookShelf->AppendBook(*book1);
    bookShelf->AppendBook(*book2);
    bookShelf->AppendBook(*book3);
    bookShelf->AppendBook(*book4);
    Iterator *it = bookShelf->GetIterator();
    auto *bookShelfIterator = dynamic_cast<BookShelfIterator *>(it);
    while (bookShelfIterator->HasNext()) {
        Book book = bookShelfIterator->Next<Book>();
        std::cout << book.GetName() << std::endl;
    }
    return 0;
}