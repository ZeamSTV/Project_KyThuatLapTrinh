﻿#include <iostream>
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


LibraryStaff* Library::searchLibraryStaff(const string& keyword) {
    // Input data from the user
    cout << "Enter keyword to search for staff: ";
    string userKeyword;  // Use a separate variable to store user input
    getline(cin, userKeyword);

    // Search for the staff member with the specified keyword
    for (int i = 0; i < libraryStaffCount; ++i) {
        if (libraryStaff[i].getName().find(userKeyword) != string::npos ||
            libraryStaff[i].getEmail().find(userKeyword) != string::npos) {
            // Display the found staff member
            cout << "Found staff: ID=" << libraryStaff[i].getId() << ", Name=" << libraryStaff[i].getName() << ", Email=" << libraryStaff[i].getEmail() << endl;
            return &libraryStaff[i];
        }
    }

    cout << "Staff not found." << endl;
    return nullptr;
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

PublishingHouse* Library::searchPublishingHouse(const string& keyword) {
    // Input data from the user
    cout << "Enter keyword to search for publishing house: ";
    string userKeyword;  // Use a separate variable to store user input
    getline(cin, userKeyword);

    // Search for the publishing house with the specified keyword
    for (int i = 0; i < publishingHouseCount; ++i) {
        if (publishingHouses[i].getName().find(userKeyword) != string::npos ||
            publishingHouses[i].getAddress().find(userKeyword) != string::npos) {
            // Display the found publishing house
            cout << "Found publishing house: ID=" << publishingHouses[i].getId() << ", Name=" << publishingHouses[i].getName() << ", Address=" << publishingHouses[i].getAddress() << endl;
            return &publishingHouses[i];
        }
    }

    cout << "Publishing house not found." << endl;
    return nullptr;
}

void Library::viewPublishingHouses() {
    for (int i = 0; i < publishingHouseCount; ++i) {
        cout << "ID: " << publishingHouses[i].getId() << ", Name: " << publishingHouses[i].getName() << ", Address: " << publishingHouses[i].getAddress() << endl;
    }
}