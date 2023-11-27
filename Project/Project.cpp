#include <iostream>

#include "Library.h"
#include "Patron.h"

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

void bookMenu(Library& library) {
    int choice;
    do {
        cout << "----- Menu -----" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. Update Book" << endl;
        cout << "3. Remove Book" << endl;
        cout << "4. Display Books" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (choice) {
        case 1: {
            library.addBook();
            break;
        }
        case 2: {
            library.updateBook();
            break;
        }
        case 3: {
            library.removeBook();
            break;
        }
        case 4: {

            library.displayBooks();
            break;
        }
        case 5: {
            cout << "Exiting..." << endl;
            break;
        }
        default:
            cout << "Invalid choice. Please enter a valid choice." << endl;
        }
    } while (choice != 5);
}

int main() {
    Library library;

    int roleChoice;
    do {
        cout << "\n--- Main Menu ---\n";
        cout << "1. Library Staff\n";
        cout << "2. Publishing House\n";
        cout << "3. Book\n";
        cout << "4. Manage library book borrowing\n";
        cout << "5. Manage library book returning\n";
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
        case 3:
            bookMenu(library);
            break;
        case 4: {
            Patron test(1, "truk");
            Book b(1, "sach1", "tacgia");
            test.borrowBook(b);
            test.returnBook();
            test.borrowBook(b);
            test.displayBorrowHistoty();
            break;
        }
        case 0:
            cout << "Exiting the program. Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (roleChoice != 0);

    return 0;
}
