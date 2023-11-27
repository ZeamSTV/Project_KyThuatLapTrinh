#pragma once
#include <string>
#include "Book.h"
#include <vector>
#include "BorrowingRecord.h"
#include "BorrowingRecordManagement.h"
using namespace std;
class Patron
{
	public:
		int patronID;
		string name;
		bool hasBook;
		bool borrowingPrivilege;
	private:
		vector<BorrowingRecord> br;
	public: 
		Patron() = default;
		Patron(int patronID, string name);
		void borrowBook(Book& b, BorrowingRecordManagement& brm);
		void returnBook(BorrowingRecordManagement& brm);
		void displayBorrowHistoty();
};

