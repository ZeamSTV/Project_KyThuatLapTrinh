#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Book.h"

using namespace std;

class AuthorBook{
	
public:
	AuthorBook();
	AuthorBook(string id, string fullname, string brithday);
	void addWrittenBooks();
	void showWrittenBooks();
public:
	string idAuthor;
	string fullname;
	string birthday;
	std::vector<Book> writtenbooks;

	bool operator==(const AuthorBook& other) const {
		return (this->idAuthor == other.idAuthor);
	}

};

