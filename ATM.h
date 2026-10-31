#pragma once
#include "Exceptions.h"
class ATM {
private:
    int balance;
    int dailyLimit;
    int withdrawnToday;

public:
    ATM(int initialBalance, int limit);

    void withdraw(int amount);
    int getBalance() const;
};
