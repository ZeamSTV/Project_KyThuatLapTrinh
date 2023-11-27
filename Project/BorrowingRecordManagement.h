#pragma once
#include <vector>
#include "BorrowingRecord.h"

class BorrowingRecordManagement
{
public:
	vector<BorrowingRecord> borrowingRecordList;
public:
	void addNewBorrowingRecord(BorrowingRecord& newRecord);
	void deleteBorrowingRecord();
	BorrowingRecord* searchBorrowingRecord();
	void viewAllBorrowingRecords();
};

