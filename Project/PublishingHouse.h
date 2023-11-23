#pragma once

#include <string>

using namespace std;

class PublishingHouse
{
	int id;
	string name;
	string address;

public: PublishingHouse(int id, string name, string address);
	  PublishingHouse() = default;
	  int getId();

	  string getName();

	  string getAddress();

	  void setID(int id);

	  void setName(string& name);

	  void setAddress(string& address);
};

