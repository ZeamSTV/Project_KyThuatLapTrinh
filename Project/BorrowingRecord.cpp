#include "BorrowingRecord.h"


int BorrowingRecord::currentID = 0;

BorrowingRecord::BorrowingRecord(int patronID,Book b) {
	this->borrowingRecordID = currentID;
	this->patronID = patronID;
	this->b = b;
	this->issueDate = time(0);
	//Mac dinh 0 la chua tra
	this->returnDate = 0;
	currentID++;
}

string BorrowingRecord::toString() {
	string s;
	char buffer1[26], buffer2[26];
	ctime_s(buffer1, sizeof(buffer1), &issueDate);
	ctime_s(buffer2, sizeof(buffer2), &returnDate);
	if (returnDate == 0)
		s = "\n-Borrower ID: "+ to_string(patronID) +"\n-Book Title: " + b.title + "\n-Issue Date: " + buffer1 + "-Return Date: " + "Book not returned yet";
	else
		s = "\n-Borrower ID: "+ to_string(patronID) +"\n-Book Title: " + b.title + "\n-Issue Date: " + buffer1 + "-Return Date: " + buffer2;
	return s;
}