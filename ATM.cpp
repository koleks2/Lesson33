#include "ATM.h"

ATM::ATM(int initialBalance, int limit)
    : balance(initialBalance), dailyLimit(limit), withdrawnToday(0) {
}

void ATM::withdraw(int amount) {
    if (amount <= 0 || amount % 100 != 0) {
        throw InvalidAmountException("Error: Amount must be a positive multiple of 100.");
    }

    if (amount > balance) {
        throw InsufficientFundsException("Error: Insufficient funds on balance.");
    }

    if (withdrawnToday + amount > dailyLimit) {
        throw LimitExceededException("Error: Daily withdrawal limit exceeded.");
    }

    balance -= amount;
    withdrawnToday += amount;

    std::cout << "Success! Withdrawn: " << amount << ". Remaining balance: " << balance << std::endl;
}

int ATM::getBalance() const {
    return balance;
}