#include "Account.h"

Account::Account(const string& username, const string& password)
    : username(username), password(password) {
}

string Account::getUsername() const {
    return username;
}

string Account::getPassword() const {
    return password;
}

void Account::listAccounts(const vector<Account>& accounts) const {
    for (const auto& acc : accounts) {
        cout << "Username: " << acc.getUsername() << endl;
    }
}

void Account::searchAccount(const vector<Account>& accounts, const string& username) {
    for (const auto& acc : accounts) {
        if (acc.getUsername() == username) {
            cout << "Username: " << acc.getUsername() << " is valid" << endl;
        }
    }
}

void Account::viewAccount() const {
    cout << "Username: " << getUsername() << endl;
}

void Account::addNewAccount(vector<Account>& accounts) {
    string username, password;
    cout << "Enter new username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    Account newAccount(username, password);
    accounts.push_back(newAccount);
}

void Account::deleteAccount(vector<Account>& accounts, const string& username) {
    auto it = find_if(accounts.begin(), accounts.end(), [&](const Account& acc) {
        return acc.getUsername() == username;
        });

    if (it != accounts.end()) {
        accounts.erase(it);
        cout << "Account deleted successfully." << endl;
    }
    else {
        cout << "Account not found." << endl;
    }
}

Account* Account::login(vector<Account>& accounts, const string& username, const string& password) {
    for (auto& acc : accounts) {
        if (acc.getUsername() == username && acc.getPassword() == password) {
            return &acc;
        }
    }
    return nullptr;
}

void Account::registerAccount(vector<Account>& accounts, const string& username, const string& password) {
    Account newAccount(username, password);
    accounts.push_back(newAccount);
    cout << "Account registered successfully." << endl;
}
