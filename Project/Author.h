#pragma once
#include <iostream>
#include <list>
#include "Book.h"

using namespace std;

class Author
{
public:
	Author() = default;
	void addWrittenBooks();
	void showWrittenBooks();
	Author(string id, string fullname, string brithday);
	string idauthor;
	string fullname;
	string birthday;
	std::list<Book> writtenbooks;

};

