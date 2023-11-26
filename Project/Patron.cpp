#include "Patron.h"

Patron::Patron(int patronID, string name) {
	this->patronID = patronID;
	this->name = name;
	this->hasBook = false;
	this->borrowingPrivilege = true;
}


