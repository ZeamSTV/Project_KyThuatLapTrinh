#pragma once
#include <vector>
#include "Author.h"

class ListAuthor
{
public:
	std::vector<Author> listAuthor;
	void addAuthor();
	void searchAuthor();
	void updateAuthor();
	void deteleAuthor();
	void showAll();
	void displayMenu();
};

