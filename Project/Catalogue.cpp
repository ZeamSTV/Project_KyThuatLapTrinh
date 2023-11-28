#include "Catalogue.h"

using namespace std ;

void Catalogue::listBookType() {
    if (bookTypes.empty()) {
        cout << "The catalogue is empty.\n";
        return;
    }

    std::cout << "Book types in the catalogue:\n";
    for (const auto& bookType : bookTypes) {
        cout << "- " << bookType.name << "\n";
    }
}

void Catalogue::addBookType(const string& bookTypeName) {
    bookTypes.push_back(BookType(bookTypeName));
    cout << "Book type " << bookTypeName << " has been added to the catalogue.\n";
}

void Catalogue::removeBookType(const string& bookTypeName) {
    auto it = find_if(bookTypes.begin(), bookTypes.end(),
        [bookTypeName](const BookType& bt) { return bt.name == bookTypeName; });

    if (it != bookTypes.end()) {
        bookTypes.erase(it);
        cout << "Book type " << bookTypeName << " has been removed from the catalogue.\n";
    }
    else {
        cout << "Book type " << bookTypeName << " is not in the catalogue.\n";
    }
}

void Catalogue::searchBookType(const string& bookTypeName) {
    auto it = std::find_if(bookTypes.begin(), bookTypes.end(),
        [bookTypeName](const BookType& bt) { return bt.name == bookTypeName; });

    if (it != bookTypes.end()) {
        cout << "Book type " << bookTypeName << " is in the catalogue.\n";
    }
    else {
        cout << "Book type " << bookTypeName << " is not in the catalogue.\n";
    }
}

