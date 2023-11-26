#include "ListAuthor.h"
#include "Author.h"
#include <vector>

void ListAuthor::addAuthor()
{
	AuthorBook au = AuthorBook();
	cout << "Enter Id: ";
	cin >> au.idAuthor;
	cout << "Enter Full Name: ";
	cin >> au.fullname;
	cout << "Enter BirthDay: ";
	cin >> au.birthday;
	listAuthor.push_back(au);
}

void ListAuthor::searchAuthor()
{
	string idauthor;
	cout << "Enter ID: ";
	cin >> idauthor;
	for (AuthorBook author: listAuthor)
	{
		if (idauthor == author.idAuthor) {
			cout << author.idAuthor << "-" << author.fullname << "-" << author.birthday;
			author.showWrittenBooks();
		}
	}
}
void ListAuthor::updateAuthor()
{
	deteleAuhtor();
	addAuthor();
}



void ListAuthor::deteleAuhtor()
{
	AuthorBook authorDeleted;
	cout << "Enter ID: ";
	cin >> authorDeleted.idAuthor;

	for (auto it = listAuthor.begin(); it != listAuthor.end(); ++it) {
		if (*it == authorDeleted) {
			listAuthor.erase(it);
			std::cout << "Object was deleted" << std::endl;
			return;
		}
	}

}

void ListAuthor::showAll()
{
	for (AuthorBook author : listAuthor)
	{
		cout << author.idAuthor << "-" << author.fullname << "-" << author.birthday;
		author.showWrittenBooks();
	}

}
