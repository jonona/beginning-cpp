#pragma once

#include <vector>
#include "Account.h"
#include "SavingsAccount.h"
#include "TrustAccount.h"
#include "CheckingAccount.h"

// helper functions for Account class

void display(const std::vector<Account> &accounts);
void deposit(std::vector<Account> &accounts, double amount);
void withdraw(std::vector<Account> &accounts, double amount);

// helper functions for Savings account class

void display(const std::vector<SavingsAccount> &accounts);
void deposit(std::vector<SavingsAccount> &accounts, double amount);
void withdraw(std::vector<SavingsAccount> &accounts, double amount);

// helper functions for Trust account class

void display(const std::vector<TrustAccount> &accounts);
void deposit(std::vector<TrustAccount> &accounts, double amount);
void withdraw(std::vector<TrustAccount> &accounts, double amount);

// helper functions for Checking account class

void display(const std::vector<CheckingAccount> &accounts);
void deposit(std::vector<CheckingAccount> &accounts, double amount);
void withdraw(std::vector<CheckingAccount> &accounts, double amount);