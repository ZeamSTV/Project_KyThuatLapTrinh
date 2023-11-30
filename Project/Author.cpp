#include "Author.h"
#include "Library.h"
#include "ListAuthor.h"
#include <list>

Author::Author() {

}

Author::Author(string id, string fullname, string brithday)
{
	this->idAuthor = id;
	this->fullname = fullname;
	this->birthday = brithday;
}

void Author::addWrittenBooks ()
{
	Library lib;
	string titleBook;
	cout << "Enter title book: ";
	cin >> titleBook;
	for (Book book: lib.books)
	{
		string temp = book.getTitle();
		if (temp == titleBook) {
			this->writtenbooks.push_back(book);
			book.setAuthor(this->fullname);
			cout << "Add Success \n";
			return;
		}
	}

	cout << "Not found this book in library \n";
}

void Author::showWrittenBooks()
{
	cout << "-----Written Books-----" << endl;
	for (Book book : writtenbooks) {
		cout << "----" << book.BookID << "-" << book.getTitle()<< endl;
	}
}


