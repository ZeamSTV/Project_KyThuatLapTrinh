#pragma once
#include <iostream>
#include <string>

using namespace std;

class Book
{
public:
	int BookID;
	string title;
	string author;
public:
	Book();
	Book(int BookID, string title, string author);
	int getBookID() const;
	string getTitle() const;
	string getAuthor() const;
	void setBookID(int BookID);
	void setTitle(const string& title);
	void setAuthor(const string& author);
};

