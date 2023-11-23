#include "PublishingHouse.h"

PublishingHouse::PublishingHouse(int id, string name, string address) {
	this->id = id;
	this->name = name;
	this->address = address;
}

int PublishingHouse::getId() {
	return id;
}

string PublishingHouse::getName() {
	return name;
}

string PublishingHouse::getAddress() {
	return address;
}
void PublishingHouse::setID(int id) {
	this->id = id;
 }
void PublishingHouse::setName(string& name) {
	this->name = name;
}
void PublishingHouse::setAddress(string& address) {
	this->address = address;
}
