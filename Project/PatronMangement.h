#pragma once
#include <vector>
#include "Patron.h"
using namespace std;
class PatronMangement
{
public:
	vector<Patron> patronList;
public:
	void addPatron();
	void deletePatron();
	Patron* searchPatron();
	void viewAllPatrons();
};

