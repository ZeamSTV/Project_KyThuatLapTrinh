#pragma once
#include "LibraryStaff.h"
#include "PublishingHouse.h"
#include <list> 

#include "Book.h"

class Library {
public:
    Library();

    void addLibraryStaff();
    void removeLibraryStaff();
    void updateLibraryStaff();
    LibraryStaff* searchLibraryStaff(const std::string& keyword);
    void viewLibraryStaff();

    void addPublishingHouse();
    void removePublishingHouse();
    void updatePublishingHouse();
    PublishingHouse* searchPublishingHouse(const std::string& keyword);
    void viewPublishingHouses();

    list<Book> books;

    public :
    
    static const int MAX_READERS = 100;
    static const int MAX_LIBRARY_STAFF = 100;
    static const int MAX_PUBLISHING_HOUSES = 100;
    
    LibraryStaff libraryStaff[MAX_LIBRARY_STAFF];
    PublishingHouse publishingHouses[MAX_PUBLISHING_HOUSES];
    
    int libraryStaffCount = 0;
    int publishingHouseCount = 0;
    

    void searchBookByID() const;

    void addBook();

    void updateBook();

    void removeBook();

    void displayBooks() const;
};
