#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Book.h"

using namespace std;

class Author{
	
public:
	Author();
	Author(string id, string fullname, string brithday);
	void addWrittenBooks();
	void showWrittenBooks();
public:
	string idAuthor;
	string fullname;
	string birthday;
	std::vector<Book> writtenbooks;

	bool operator==(const Author& other) const {
		return (this->idAuthor == other.idAuthor);
	}

};

