#include "Author.h"
#include "Library.h"
#include "ListAuthor.h"
#include <list>

void Author::addWrittenBooks()
{
	Library lib;
	string titleBook;
	cout << "Enter title book";
	cin >> titleBook;
	for (Book book: lib.books)
	{
		if (book.getTitle() == titleBook) {
			writtenbooks.push_back(book);
			return;
		}
	}

	cout << "Not found this book in library";
}

void Author::showWrittenBooks()
{
	Library lib;
	for (Book book : lib.books) {
		cout << "----" << book.BookID << "-" << book.getTitle();
	}
}

Author::Author(string id, string fullname, string brithday)
{
	this->idauthor = id;
	this->fullname = fullname;
	this->birthday = brithday;	
}
