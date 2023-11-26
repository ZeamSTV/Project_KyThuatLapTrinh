#include "Patron.h"

Patron::Patron(int patronID, string name) {
	this->patronID = patronID;
	this->name = name;
	this->hasBook = false;
	this->borrowingPrivilege = true;
}

void Patron::borrowBook(Book b) {
	if (hasBook == false && borrowingPrivilege == true) {
		BorrowingRecord newbr(b);
		br.push_back(newbr);
		hasBook = true;
		cout << "Borrowed "<<b.title<<" successfully";
	}
	else {
		cout << "Can not borrow book";
	}
}

void Patron::returnBook() {
	int brSize = br.size();
	if (brSize != 0) {
		time_t rtDate = br[brSize - 1].returnDate;
		if (time(0) == rtDate) {
			hasBook = false;
			cout << "return successfully";
		}
		else {
			if (time(0) < rtDate) {
				hasBook = false;
				br[brSize - 1].returnDate = time(0);
				cout << "return successfully";
			}
			else {
				hasBook = false;
				br[brSize - 1].returnDate = time(0);
				borrowingPrivilege = false;
				cout << "return successfully but the patron is blocked because of overdue return";
			}
		}
	}
}
