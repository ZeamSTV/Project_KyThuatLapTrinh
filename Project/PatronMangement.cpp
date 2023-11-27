#include "PatronMangement.h"

void PatronMangement::addPatron() {
    int patronID;
    string name;
    cout << "Enter patron id: ";
    cin >> patronID;
    cout << "Enter patron name: ";
    cin >> name;
    //Kt xem patron ton tai chua
    for (const Patron patron : patronList) {
        if (patron.patronID == patronID) {
            cout << "Patron with ID " << patronID << " already exists.\n";
            return;
        }
    }

    Patron newPatron(patronID, name);
    patronList.push_back(newPatron);
    cout << "New patron added successfully.\n";
}

void PatronMangement::deletePatron() {
    int patronID;
    cout << "Enter patron id: ";
    cin >> patronID;
    for (auto it = patronList.begin(); it != patronList.end(); ++it) {
        if (it->patronID == patronID) {
            patronList.erase(it);
            std::cout << "Patron with ID " << patronID << " deleted.\n";
            return;
        }
    }
    std::cout << "Patron with ID " << patronID << " not found.\n";
}

Patron* PatronMangement::searchPatron() {
    int patronID;
    cout << "Enter patron id: ";
    cin >> patronID;
    for (auto& patron : patronList) {
        if (patron.patronID == patronID) {
            cout << "Patron ID: " << patron.patronID << ", Name: " << patron.name << std::endl;
            return &patron; 
        }
    }
    return nullptr;
}

void PatronMangement::viewAllPatrons() {
    cout << "List of Patrons:\n";
    for (const auto& patron : patronList) {
        cout << "Patron ID: " << patron.patronID << ", Name: " << patron.name << std::endl;
    }
}