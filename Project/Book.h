#pragma once
#include <iostream>
#include <string>
#include "BasicType.h"

using namespace std;

class Book
{
public:
	int BookID;
	string title;
	string author;
	BookStatus status;
public:
	Book();
	Book(int BookID, string title, string author);
	int getBookID() const;
	string getTitle() const;
	string getAuthor() const;
	BookStatus getStatus();
	void setBookID(int BookID);
	void setTitle(const string& title);
	void setAuthor(const string& author);
	void setStatus(const BookStatus& status);
};

