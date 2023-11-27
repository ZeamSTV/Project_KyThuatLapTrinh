#pragma once
#include <vector>
#include "Patron.h"
using namespace std;
class PatronMangement
{
public:
	vector<Patron> patronList = { Patron(1, "truk"),
	Patron(2, "Zink"),
	Patron(3, "Dux"),
	Patron(4, "Thox"), };
public:
	void addPatron();
	void deletePatron();
	Patron* searchPatron();
	void viewAllPatrons();
};

