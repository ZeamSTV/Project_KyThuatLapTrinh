#pragma once
#include <iostream>
#include <list>
#include <string>

using namespace std;

class Catalogue {
private:
    struct BookType {
        string name;

        BookType(const string& n) : name(n) {}
    };

    list<BookType> bookTypes;

public:
    void listBookType();
    void addBookType(const string& bookTypeName);
    void removeBookType(const string& bookTypeName);
    void searchBookType(const string& bookTypeName);
};


