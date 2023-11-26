#pragma once
#include <list>
#include "Author.h"

class ListAuthor
{
public:
	static std::list<Author> listAuthor;
	void addAuthor();
	void searchAuthor();
	void updateAuthor();
	void deteleAuhtor();
	void showAll();
};

