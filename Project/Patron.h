#pragma once
#include <string>
using namespace std;
class Patron
{
	public:
		int patronID;
		string name;
		bool hasBook;
		bool borrowingPrivilege;
	public: 
		Patron(int patronID, string name);
};

