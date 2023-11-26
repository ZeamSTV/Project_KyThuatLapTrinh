#include "Author.h"
#include "Library.h"
#include "ListAuthor.h"
#include <list>

AuthorBook::AuthorBook() {

}

AuthorBook::AuthorBook(string id, string fullname, string brithday)
{
	this->idAuthor = id;
	this->fullname = fullname;
	this->birthday = brithday;
}

void AuthorBook::addWrittenBooks ()
{
	Library lib;
	string titleBook;
	cout << "Enter title book";
	cin >> titleBook;
	for (Book book: lib.books)
	{
		string temp = book.getTitle();
		if (temp == titleBook) {
			writtenbooks.push_back(book);
			return;
		}
	}

	cout << "Not found this book in library";
}

void AuthorBook::showWrittenBooks()
{
	Library lib;
	for (Book book : lib.books) {
		cout << "----" << book.BookID << "-" << book.getTitle();
	}
}


