#pragma once
#include <vector>
#include "Author.h"

class ListAuthor
{
public:
	std::vector<AuthorBook> listAuthor;
	void addAuthor();
	void searchAuthor();
	void updateAuthor();
	void deteleAuhtor();
	void showAll();
};

