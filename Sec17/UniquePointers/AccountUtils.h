#pragma once

#include <vector>
#include "Account.h"

// helper functions for Account * class

void display(const std::vector<Account*> &accounts);
void deposit(std::vector<Account*> &accounts, double amount);
void withdraw(std::vector<Account*> &accounts, double amount);
