#include <iostream>

#include "Library.h"

using namespace std;

void libraryStaffMenu(Library& library) {
    int choice;
    do {
        cout << "\n--- Library Staff Menu ---\n";
        cout << "1. Add Library Staff\n";
        cout << "2. Remove Library Staff\n";
        cout << "3. Update Library Staff\n";
        cout << "4. Search Library Staff\n";
        cout << "5. View Library Staff\n";
        cout << "0. Back to Main Menu\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            library.addLibraryStaff();
            break;
        case 2:
            library.removeLibraryStaff();
            break;
        case 3:
            library.updateLibraryStaff();
            break;
        case 4:
            library.searchLibraryStaff("");
            break;
        case 5:
            library.viewLibraryStaff();
            break;
        case 0:
            cout << "Returning to Main Menu.\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);
}

void publishingHouseMenu(Library& library) {
    int choice;
    do {
        cout << "\n--- Publishing House Menu ---\n";
        cout << "1. Add Publishing House\n";
        cout << "2. Remove Publishing House\n";
        cout << "3. Update Publishing House\n";
        cout << "4. Search Publishing House\n";
        cout << "5. View Publishing Houses\n";
        cout << "0. Back to Main Menu\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            library.addPublishingHouse();
            break;
        case 2:
            library.removePublishingHouse();
            break;
        case 3:
            library.updatePublishingHouse();
            break;
        case 4:
            library.searchPublishingHouse("");
            break;
        case 5:
            library.viewPublishingHouses();
            break;
        case 0:
            cout << "Returning to Main Menu.\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);
}

int main() {
    Library library;

    int roleChoice;
    do {
        cout << "\n--- Main Menu ---\n";
        cout << "1. Library Staff\n";
        cout << "2. Publishing House\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> roleChoice;

        switch (roleChoice) {
        case 1:
            libraryStaffMenu(library);
            break;
        case 2:
            publishingHouseMenu(library);
            break;
        case 0:
            cout << "Exiting the program. Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (roleChoice != 0);

    return 0;
}
