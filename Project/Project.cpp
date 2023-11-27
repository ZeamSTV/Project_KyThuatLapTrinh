﻿#include <iostream>
#include "PatronMangement.h"
#include "Library.h"
#include "Patron.h"
#include "ListAuthor.h"
#include "ListOrder.h"
#include "Account.h"
#include "BorrowingRecordManagement.h"



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
            library.searchLibraryStaff();
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

void PatronMenu(PatronMangement& pm) {
    int choice;
    do {
        cout << "\n--- Patron Menu ---\n";
        cout << "1. Add\n";
        cout << "2. Remove \n";
        cout << "3. Search \n";
        cout << "4. View \n";
        cout << "0. Back to Main Menu\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            pm.addPatron();
            break;
        case 2:
            pm.deletePatron();
            break;
        case 3:
            pm.searchPatron();
            break;
        case 4:
            pm.viewAllPatrons();
            break;
        case 0:
            cout << "Returning to Main Menu.\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);
}

void BorrowingRecordMenu(BorrowingRecordManagement& brm) {
    int choice;
    do {
        cout << "\n--- Borrowing Record Menu ---\n";
        cout << "1. Remove \n";
        cout << "2. Search \n";
        cout << "3. View \n";
        cout << "0. Back to Main Menu\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            brm.deleteBorrowingRecord();
            break;
        case 2:
            brm.searchBorrowingRecord();
            break;
        case 3:
            brm.viewAllBorrowingRecords();
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
            library.searchPublishingHouse();
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
        cout << "5. Search Books By ID" << endl;
        cout << "6. Exit" << endl;
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
            library.searchBookByID();
            break;
        }
        case 6: {
            cout << "Exiting..." << endl;
            break;
        }
        default:
            cout << "Invalid choice. Please enter a valid choice." << endl;
        }
    } while (choice != 6);
}
void accountMenu(vector<Account>& accountList, Account& admin) {
    int choice;
    do {
        cout << "Accounts Management System" << endl;
        cout << "1. List Accounts" << endl;
        cout << "2. Add New Account" << endl;
        cout << "3. Delete Account" << endl;
        cout << "4. Search" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            admin.listAccounts(accountList);
            break;
        case 2:
            admin.addNewAccount(accountList);
            break;
        case 3: {
            string username;
            cout << "Enter username to delete: ";
            cin >> username;
            admin.deleteAccount(accountList, username);
            break;
        }
        case 4: {
            string username;
            cout << "Enter username to search: ";
            cin >> username;
            admin.searchAccount(accountList, username);
            break;
        }
        case 5:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);
}
int main() {
    Library library;
    vector<Account> accountList;
    Account admin("admin", "password");
    accountList.push_back(admin);
    BorrowingRecordManagement brm;
    PatronMangement pm;
    int roleChoice = 100;
    do {
        cout << "\n--- Main Menu ---\n";
        cout << "1. Library Staff\n";
        cout << "2. Publishing House\n";
        cout << "3. Book\n";
        cout << "4. Manage library book borrowing\n";
        cout << "5. Manage library book returning\n";
        cout << "6. Manage Author" << endl;
        cout << "7. Manage Purchase Order" << endl;
        cout << "8. Account Manager" << endl;
        cout << "8. Manage Patron" << endl;
        cout << "9. Manage Borrowing Record" << endl;
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> roleChoice;

        switch (roleChoice) 
        {
        case 1:
            libraryStaffMenu(library);
            break;
        case 2:
            publishingHouseMenu(library);
            break;
        case 3:
            bookMenu(library);
            break;
        case 4:
        {   
            Patron* test = pm.searchPatron();
            if (test != nullptr) {
                //Gia su tim duoc book b qua searchBook;
                Book b(1, "sach1", "tacgia");
                test->borrowBook(b, brm);
                test->returnBook(brm);
                test->borrowBook(b, brm);
                test->displayBorrowHistoty();
            }
            break;
        }
        case 6:{
            ListAuthor la;
            la.displayMenu();
            break;
        }         
        case 7:{
            ListOrder lo;
            lo.displayMenu();
            break;}
        case 8: {
            PatronMenu(pm);
            break;
        }
        case 9: {
            BorrowingRecordMenu(brm);
            break;
        }
        case 10:{
            accountMenu(accountList, admin);
            break;
        }
        case 0:
            cout << "Exiting the program. Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
            break;
        }
    } while (roleChoice != 0);

    return 0;
}
