#pragma once
#include <string>

using namespace std;

class LibraryStaff
{
	int id;
	string name;
	string email;

public: LibraryStaff(int id, string name, string email);
	  LibraryStaff() = default;

	  int getId();

	  string getName();

	  string getEmail();

	  void setID(int id);

	  void setName(string& name);

	  void setEmail(string& email);
	  
};

