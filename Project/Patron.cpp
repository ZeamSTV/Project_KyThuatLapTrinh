#include "Patron.h"


Patron::Patron(int patronID, string name) {
	this->patronID = patronID;
	this->name = name;
	this->hasBook = false;
	this->borrowingPrivilege = true;
}


void Patron::borrowBook(Book& b, BorrowingRecordManagement& brm) {
	if (hasBook == false && borrowingPrivilege == true) {
		BorrowingRecord newbr(patronID,b);
		br.push_back(newbr);
		brm.borrowingRecordList.push_back(newbr);
		hasBook = true;
		cout << "Borrowed "<<b.title<<" successfully\n";
	}
	else {
		cout << "Can not borrow book\n";
	}
}

void Patron::returnBook(BorrowingRecordManagement& brm) {
	int brSize = br.size();
	if (brSize != 0 && this->hasBook==true) {
		//sach phai duoc tra sau 12 ngay hoac som hon
		time_t rtDate = br[brSize - 1].issueDate + 14*24*60*60;
		if (time(0) <= rtDate) {
			hasBook = false;
			br[brSize - 1].returnDate = time(0);
			for (BorrowingRecord& br : brm.borrowingRecordList) {
				if (br.borrowingRecordID == this->br[brSize - 1].borrowingRecordID) {
					br.returnDate = time(0);
				}
			}
			cout << "return successfully\n";
		}
		else {
			hasBook = false;
			br[brSize - 1].returnDate = time(0);
			borrowingPrivilege = false;
			cout << "return successfully but the patron is blocked because of overdue return\n";
		}
	}
	else {
		cout << "This patron is not currently borrowing books";
	}
}

void Patron::displayBorrowHistoty() {
	for(BorrowingRecord o:br)
	{
		cout << o.toString();
		cout << "\n----------------";
	}
}
