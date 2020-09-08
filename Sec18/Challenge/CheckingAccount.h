#pragma once
#include "Account.h"
#include <iostream>

class CheckingAccount : public Account
{
private:
    static constexpr const char *def_name = "Unnamed account";
    static constexpr double def_balance = 0.0;
    static constexpr double fee = 1.50;
public:
    CheckingAccount(std::string name = def_name, double balance  = def_balance);
    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override;
    virtual void print(std::ostream &os) const override;
    virtual ~CheckingAccount() = default;
};

