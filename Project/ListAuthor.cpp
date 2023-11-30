#include "ListAuthor.h"
#include "Author.h"
#include <vector>

void ListAuthor::addAuthor()
{
	Author au = Author();
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
	for (Author author: listAuthor)
	{
		if (idauthor == author.idAuthor) {
			cout << author.idAuthor << "-" << author.fullname << "-" << author.birthday<<endl;
			author.showWrittenBooks();
			return;
		}
	}

	cout << "Not Found This Author \n";
}
void ListAuthor::updateAuthor()
{
	deteleAuthor();
	addAuthor();
}



void ListAuthor::deteleAuthor()
{
	Author authorDeleted;
	cout << "Enter ID: ";
	cin >> authorDeleted.idAuthor;

	for (auto it = listAuthor.begin(); it != listAuthor.end(); ++it) {
		if (*it == authorDeleted) {
			listAuthor.erase(it);
			std::cout << "Success" << std::endl;
			return;
		}
	}

}

void ListAuthor::showAll()
{
	for (Author author : listAuthor)
	{
		cout << author.idAuthor << "-" << author.fullname << "-" << author.birthday<<endl;
		author.showWrittenBooks();
	}

}

void ListAuthor::displayMenu()
{
	listAuthor.push_back(Author("id1", "NguyenVanA", "01-10-1980"));
	listAuthor.push_back(Author("id2", "NguyenVanB", "02-10-1980"));
	listAuthor.push_back(Author("id3", "NguyenVanC", "03-10-1980"));
	listAuthor.push_back(Author("id4", "NguyenVanD", "04-10-1980"));
	int choose = 100;
	do {
		cout << "-------Menu Manage Author--------" << endl;
		cout << "----1:Show All Author" << endl;
		cout << "----2:Add Author" << endl;
		cout << "----3:Search Author" << endl;
		cout << "----4:Delete Author" << endl;
		cout << "----5:Update Author" << endl;
		cout << "----6:Add Written Books" << endl;
		cout << "----0: Quit" << endl;
		cout << "Please choose Feature" << endl;
		cin >> choose;

		switch (choose)
		{
		case 1: showAll();
			break;
		case 2: addAuthor();
			break;
		case 3: searchAuthor();
			break;
		case 4: deteleAuthor();
			break;
		case 5: updateAuthor();
			break;
		case 6: {
			string idauthor;
			int c = 0;
			cout << "Enter ID Author ";
			cin >> idauthor;
			for (Author au : listAuthor) {
				if (idauthor == au.idAuthor) {
					au.addWrittenBooks();
					break;
				}
			}
		}
		default: cout << "Invalid choice. Please try again" << endl;
			break;
		}
	} while (choose != 0);
}
