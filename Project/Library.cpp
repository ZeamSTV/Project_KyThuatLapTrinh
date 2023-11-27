#include <iostream>
#include "Library.h"

using namespace std;



void Library::addLibraryStaff() {
    if (libraryStaffCount < MAX_LIBRARY_STAFF) {
        int staffId;
        string newName, newEmail;

        // Input data from the user
        cout << "Enter staff ID: ";
        cin >> staffId;
        cin.ignore();  // Ignore the newline character in the input buffer
        cout << "Enter staff name: ";
        getline(cin, newName);
        cout << "Enter staff email: ";
        getline(cin, newEmail);

        // Create a new LibraryStaff object with user input
        LibraryStaff newStaff(staffId, newName, newEmail);

        // Add the new staff to the array
        libraryStaff[libraryStaffCount++] = newStaff;

        cout << "Library staff added successfully." << endl;
    }
    else {
        cout << "Error: Maximum library staff capacity reached." << endl;
    }
}

void Library::removeLibraryStaff() {
    int staffId;

    // Input data from the user
    cout << "Enter staff ID to remove: ";
    cin >> staffId;

    // Call the existing removeLibraryStaff function with the user input
    for (int i = 0; i < libraryStaffCount; ++i) {
        if (libraryStaff[i].getId() == staffId) {
            // Shift elements to fill the gap
            for (int j = i; j < libraryStaffCount - 1; ++j) {
                libraryStaff[j] = libraryStaff[j + 1];
            }
            // Decrement the count
            --libraryStaffCount;
            cout << "Library staff removed successfully." << endl;
            return;
        }
    }

    cout << "Error: Library staff with ID " << staffId << " not found." << endl;
}


void Library::updateLibraryStaff() {
    int staffId;
    string newName, newEmail;

    // Input data from the user
    cout << "Enter staff ID to update: ";
    cin >> staffId;

    // Find the staff member with the specified ID
    for (int i = 0; i < libraryStaffCount; ++i) {
        if (libraryStaff[i].getId() == staffId) {
            // Input new data from the user
            cin.ignore();  // Ignore the newline character in the input buffer
            cout << "Enter new staff name: ";
            getline(cin, newName);
            cout << "Enter new staff email: ";
            getline(cin, newEmail);

            // Update the staff member
            libraryStaff[i].setName(newName);
            libraryStaff[i].setEmail(newEmail);

            cout << "Library staff updated successfully." << endl;
            return;
        }
    }

    cout << "Error: Library staff with ID " << staffId << " not found." << endl;
}


void Library::searchLibraryStaff() {
    // Input data from the user
    int idStaff;
    cout << "Enter keyword to search for staff: ";
    cin >> idStaff;

    // Search for the staff member with the specified keyword
    for (int i = 0; i < libraryStaffCount; ++i) {
        if (libraryStaff[i].getId() == idStaff) {
            // Display the found staff member
            cout << "Found staff: ID=" << libraryStaff[i].getId() << ", Name=" << libraryStaff[i].getName() << ", Email=" << libraryStaff[i].getEmail() << endl;
            
        }
        else if (libraryStaff[i].getId() != idStaff) {
            cout << "Staff not found!" << endl;

        }
    }

    
    
}



void Library::viewLibraryStaff() {
    for (int i = 0; i < libraryStaffCount; ++i) {
        cout << "ID: " << libraryStaff[i].getId() << ", Name: " << libraryStaff[i].getName() << ", Email: " << libraryStaff[i].getEmail() << endl;
    }
}

void Library::addPublishingHouse() {
    if (publishingHouseCount < MAX_PUBLISHING_HOUSES) {
        int houseId;
        string newName, newAddress;

        // Input data from the user
        cout << "Enter house ID: ";
        cin >> houseId;
        cin.ignore();  // Ignore the newline character in the input buffer
        cout << "Enter house name: ";
        getline(cin, newName);
        cout << "Enter house address: ";
        getline(cin, newAddress);

        // Create a new PublishingHouse object with user input
        PublishingHouse newHouse(houseId, newName, newAddress);

        // Add the new house to the array
        publishingHouses[publishingHouseCount++] = newHouse;

        cout << "Publishing house added successfully." << endl;
    }
    else {
        cout << "Error: Maximum publishing house capacity reached." << endl;
    }
}

void Library::removePublishingHouse() {
    int houseId;

    // Input data from the user
    cout << "Enter house ID to remove: ";
    cin >> houseId;

    // Call the existing removePublishingHouse function with the user input
    for (int i = 0; i < publishingHouseCount; ++i) {
        if (publishingHouses[i].getId() == houseId) {
            // Shift elements to fill the gap
            for (int j = i; j < publishingHouseCount - 1; ++j) {
                publishingHouses[j] = publishingHouses[j + 1];
            }
            // Decrement the count
            --publishingHouseCount;
            cout << "Publishing house removed successfully." << endl;
            return;
        }
    }

    cout << "Error: Publishing house with ID " << houseId << " not found." << endl;
}

void Library::updatePublishingHouse() {
    int houseId;
    string newName, newAddress;

    // Input data from the user
    cout << "Enter house ID to update: ";
    cin >> houseId;

    // Find the house with the specified ID
    for (int i = 0; i < publishingHouseCount; ++i) {
        if (publishingHouses[i].getId() == houseId) {
            // Input new data from the user
            cin.ignore();  // Ignore the newline character in the input buffer
            cout << "Enter new house name: ";
            getline(cin, newName);
            cout << "Enter new house address: ";
            getline(cin, newAddress);

            // Update the house
            publishingHouses[i].setName(newName);
            publishingHouses[i].setAddress(newAddress);

            cout << "Publishing house updated successfully." << endl;
            return;
        }
    }

    cout << "Error: Publishing house with ID " << houseId << " not found." << endl;
}

void Library::searchPublishingHouse() {
    // Input data from the user
    int idPublish;
    cout << "Enter keyword to search for publishing house: ";
    cin >> idPublish;

    // Search for the publishing house with the specified keyword
    for (int i = 0; i < publishingHouseCount; ++i) {
        if (publishingHouses[i].getId() == idPublish) {
            // Display the found publishing house
            cout << "Found publishing house: ID=" << publishingHouses[i].getId() << ", Name=" << publishingHouses[i].getName() << ", Address=" << publishingHouses[i].getAddress() << endl;
         
        }
        else if (publishingHouses[i].getId() != idPublish) {
            cout << "Publishing house not found." << endl;
        }
    }

   
    
}

void Library::viewPublishingHouses() {
    for (int i = 0; i < publishingHouseCount; ++i) {
        cout << "ID: " << publishingHouses[i].getId() << ", Name: " << publishingHouses[i].getName() << ", Address: " << publishingHouses[i].getAddress() << endl;
    }
}

Library::Library() {
    Book book1;
    book1.setBookID(1);
    book1.setTitle("Book Title 1");
    book1.setAuthor("Author 1");

    Book book2;
    book2.setBookID(2);
    book2.setTitle("Book Title 2");
    book2.setAuthor("Author 2");

    books.push_back(book1);
    books.push_back(book2);
}

void Library::searchBookByID() const {
    int bookID;
    cout << "Please enter the Book ID you want to find: ";
    cin >> bookID;
    bool found = false;

    for (const auto& book : books) {
        if (book.getBookID() == bookID) {
            cout << "Book found:" << endl;
            cout << "Book ID: " << book.getBookID() << endl;
            cout << "Title: " << book.getTitle() << endl;
            cout << "Author: " << book.getAuthor() << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Book with ID " << bookID << " not found." << endl;
    }
}

void Library::addBook() {
    Book newBook;
    cout << "Please Enter ID of the Book : " << endl;
    cin >> newBook.BookID;
    cout << "Please Enter Author's Name : " << endl;
    cin >> newBook.author;
    cout << "Please Enter the Title of the Book : " << endl;
    cin >> newBook.title;
    books.push_back(newBook);
}


void Library::updateBook() {
    int bookID;
    cout << "Please enter the Book ID you want to update: ";
    cin >> bookID;

    Book updatedBook;

    for (auto& book : books) {
        if (book.getBookID() == bookID) {
            updatedBook = book;
            cout << "Current Book Information:" << endl;
            cout << "Book ID: " << book.getBookID() << endl;
            cout << "Title: " << book.getTitle() << endl;
            cout << "Author: " << book.getAuthor() << endl;
            
            cout << "Enter new Title: ";
            cin.ignore(); 
            getline(cin, updatedBook.title);

            cout << "Enter new Author's name: ";
            getline(cin, updatedBook.author);

            book = updatedBook;

            cout << "Book updated successfully!" << endl;
            return;

        }
    }
    cout << "Book with ID " << bookID << " not found." << endl;
}

void Library::removeBook() {
    int bookID;
    cout << "Please enter the Book ID you want to remove: ";
    cin >> bookID;

    for (auto it = books.begin(); it != books.end(); it++) {
        if (it->getBookID() == bookID) {
            it = books.erase(it); 
            cout << "Book with ID " << bookID << " removed successfully." << endl;
            return;
        }
    }
    cout << "Book with ID " << bookID << " not found." << endl;
}

void Library::displayBooks() const {
    cout << "List of Books:" << endl;
    for (const auto& book : books) {
        cout << "Book ID: " << book.getBookID() << endl;
        cout << "Title: " << book.getTitle() << endl;
        cout << "Author: " << book.getAuthor() << endl;
        cout << endl;
    }
}
