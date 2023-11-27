#pragma once
#include <string>
#include "Book.h"
using namespace std;
class BorrowingRecord
{
    public:
        static int currentID;
        int borrowingRecordID;
        int patronID;
        Book b;
        time_t issueDate;
        time_t returnDate;
    public:
        BorrowingRecord(int patronID, Book b);
        string toString();
};

