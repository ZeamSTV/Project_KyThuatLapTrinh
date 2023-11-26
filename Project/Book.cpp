#include "Book.h"
#include "BasicType.h"

Book::Book() {

}

Book::Book(int BookID, string title, string author) {
    this->BookID = BookID;
    this->title = title;
    this->author = author;
    this->status = BookStatus::Free;
}

int Book::getBookID() const {
    return BookID;
}

string Book::getTitle() const {
    return title;
}

string Book::getAuthor() const {
    return author;
}

BookStatus Book::getStatus() const
{
    return status;
}

void Book::setBookID(int BookID) {
    this->BookID = BookID;
}

void Book::setTitle(const string& title) {
    this->title = title;
}

void Book::setAuthor(const string& author) {
    this->author = author;
}

void Book::setStatus(const BookStatus& status)
{
    this->status = status;
}

