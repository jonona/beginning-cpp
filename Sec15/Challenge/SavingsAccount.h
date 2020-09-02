#pragma once
#include "Account.h"
#include <iostream>

class SavingsAccount : public Account
{
    friend std::ostream &operator<<(std::ostream &os, const SavingsAccount &account);
private:
    static constexpr const char *def_name = "Unnamed account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
protected:
    double int_rate;
public:
    SavingsAccount(std::string name = def_name, double balance  = def_balance, double int_rate = def_int_rate);
    bool deposit(double amount);
    // withdraw is inherited
    ~SavingsAccount();
};

