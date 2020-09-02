#pragma once
#include "Account.h"
#include <iostream>

class CheckingAccount : public Account
{
    friend std::ostream &operator<<(std::ostream &os, const CheckingAccount &account);
private:
    static constexpr const char *def_name = "Unnamed account";
    static constexpr double def_balance = 0.0;
    static constexpr double fee = 1.50;
public:
    CheckingAccount(std::string name = def_name, double balance  = def_balance);
    // deposit is inherited
    bool withdraw(double amount); // overwriting, because of exctra comission of 1.5$ per transaction
};

