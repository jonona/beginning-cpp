#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(std::string name, double balance)
    : Account{name, balance}{
}

std::ostream &operator<<(std::ostream &os, const CheckingAccount &account) {
    os << "Checking account " << account.name << " balance: " << account.balance << " Withdrawal-fee: " << account.fee << "$";
    return os;
}

bool CheckingAccount::withdraw(double amount){
    amount = amount + fee;
    return Account::withdraw(amount);
}