#pragma once
#include <string>
#include "Book.h"
using namespace std;
class BorrowingRecord
{
    public:
        Book b;
        time_t issueDate;
        time_t returnDate;
    public:
        BorrowingRecord(Book b);
        string toString();
};

