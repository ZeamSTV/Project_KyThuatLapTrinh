#include "ListAuthor.h"
#include "Author.h"
#include <list>

void ListAuthor::addAuthor()
{
	Author au;
	cout << "Enter Id: ";
	cin >> au.idauthor;
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
	for (Author author: listAuthor)
	{
		if (idauthor == author.idauthor) {
			cout << author.idauthor << "-" << author.fullname << "-" << author.birthday;
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
	string idauthor;
	cout << "Enter ID: ";
	cin >> idauthor;
	for (Author author : listAuthor)
	{
		if (idauthor == author.idauthor) {
			listAuthor.remove(author);
		}
	}
}

void ListAuthor::showAll()
{
	for (Author author : listAuthor)
	{
		cout << author.idauthor << "-" << author.fullname << "-" << author.birthday;
		author.showWrittenBooks();
	}

}
