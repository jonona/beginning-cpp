#pragma once
#include "SavingsAccount.h"
#include <iostream>

// works like SavingsAccount, but extra bonus for every deposit of 5000$ or more
// only allows 3 withdrawals per year, each must be less than 20% of the balance

class TrustAccount : public SavingsAccount
{
    friend std::ostream &operator<<(std::ostream &os, const TrustAccount &account);
private:
    static constexpr const char *def_name = "Unnamed account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
    static constexpr double bonus = 50.0;
    static constexpr int set_counter = 0;
protected:
   // double int_rate; // inherited 
    int counter;
public:
    TrustAccount(std::string name = def_name, double balance  = def_balance, double int_rate = def_int_rate, int counter = set_counter);
    bool deposit(double amount); //add bonus
    bool withdraw(double amount); //check number of withdrawals
};

