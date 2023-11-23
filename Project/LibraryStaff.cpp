#include "LibraryStaff.h"

LibraryStaff::LibraryStaff(int id, string name, string email) {
	this->id = id;
	this->name = name;
	this->email = email;
}

int LibraryStaff::getId() {
	return id;
}

string LibraryStaff::getName() {
	return name;
}

string LibraryStaff::getEmail() {
	return email;
}
void LibraryStaff::setID(int id) {
	this->id = id;
}

void LibraryStaff::setName(string& name) {
	this->name = name;
}

void LibraryStaff::setEmail(string& email) {
	this->email = email;
}