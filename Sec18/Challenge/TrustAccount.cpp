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

void TrustAccount::print(std::ostream &os) const {
    os.precision(2);
    os << std::fixed;
    os << "Trust account " << name << " balance: " << balance << " Interest rate: " << int_rate << "% Number of withdrawals: " << counter;
}


