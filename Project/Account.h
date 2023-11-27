#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Account {
private:
    string username;
    string password;

public:
    Account(const string& username, const string& password);
    string getUsername() const;
    string getPassword() const;

    void listAccounts(const vector<Account>& accounts) const;
    void searchAccount(const vector<Account>& accounts, const string& username);
    void viewAccount() const;
    void addNewAccount(vector<Account>& accounts);
    void deleteAccount(vector<Account>& accounts, const string& username);
    Account* login(vector<Account>& accounts, const string& username, const string& password);
    void registerAccount(vector<Account>& accounts, const string& username, const string& password);
};

