#include "BorrowingRecordManagement.h"

void BorrowingRecordManagement::addNewBorrowingRecord(BorrowingRecord& newRecord) {
	borrowingRecordList.push_back(newRecord);
}

void BorrowingRecordManagement::deleteBorrowingRecord() {
    int borrowingRecordID;
    cout << "Enter Borrowing Record id: ";
    cin >> borrowingRecordID;
    for (auto it = borrowingRecordList.begin(); it != borrowingRecordList.end(); ++it) {
        if (it->borrowingRecordID == borrowingRecordID) {
            borrowingRecordList.erase(it);
            std::cout << "Borrowing Record with ID " << borrowingRecordID << " deleted.\n";
            return;
        }
    }
    std::cout << "Borrowing Record with ID " << borrowingRecordID << " not found.\n";
}

BorrowingRecord* BorrowingRecordManagement::searchBorrowingRecord() {
    int borrowingRecordID;
    cout << "Enter Borrowing Record id: ";
    cin >> borrowingRecordID;
    for (BorrowingRecord& br : borrowingRecordList) {
        if (br.borrowingRecordID == borrowingRecordID) {
            cout << br.toString();
            return &br;
        }
    }
    return nullptr;
}

void BorrowingRecordManagement::viewAllBorrowingRecords() {
    cout << "List of Borrowing Records:\n";
    for (BorrowingRecord& br : borrowingRecordList) {
        cout << br.toString();
        cout << "\n--------------";
    }
}