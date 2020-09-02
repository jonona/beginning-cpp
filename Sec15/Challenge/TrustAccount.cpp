#include "TrustAccount.h"

TrustAccount::TrustAccount(std::string name, double balance, double int_rate, int counter)
    :SavingsAccount{name, balance, int_rate}, counter{counter}{
}

bool TrustAccount::deposit(double amount){
    if (amount >= 5000)
        Account::deposit(bonus);
    return SavingsAccount::deposit(amount);
}

bool TrustAccount::withdraw(double amount){
    if (counter < 3 && balance>=amount){
        counter++;
        return Account::withdraw(amount);
    }
    else
        return false;
}


std::ostream &operator<<(std::ostream &os, const TrustAccount &account) {
    os << "Trust account " << account.name << " balance: " << account.balance << " Interest rate: " << account.int_rate << "% Number of withdrawals: " << account.counter;
    return os;
}
