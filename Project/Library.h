#pragma once
#include "LibraryStaff.h"
#include "PublishingHouse.h"

class Library {
public:
    Library() = default;

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

    public :
    
    static const int MAX_READERS = 100;
    static const int MAX_LIBRARY_STAFF = 100;
    static const int MAX_PUBLISHING_HOUSES = 100;
    
    LibraryStaff libraryStaff[MAX_LIBRARY_STAFF];
    PublishingHouse publishingHouses[MAX_PUBLISHING_HOUSES];
    
    int libraryStaffCount = 0;
    int publishingHouseCount = 0;
    
};
