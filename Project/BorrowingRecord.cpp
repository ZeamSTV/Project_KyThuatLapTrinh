#include "BorrowingRecord.h"

BorrowingRecord::BorrowingRecord(Book b) {
	this->b = b;
	this->issueDate = time(0);
	//Mac dinh thoi gian tra la 12 ngay
	this->returnDate = issueDate + 12 * 24 * 60 * 60;
}