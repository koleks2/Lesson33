#include <iostream>
#include "ATM.h"
#include "Exceptions.h"

int main() {
    ATM atm(10000, 3000);

    int amount;
    std::cout << "Enter amount to withdraw: ";
    if (!(std::cin >> amount)) {
        std::cout << "Invalid input format!" << std::endl;
        return 1;
    }

    try {
        atm.withdraw(amount);
    }
    catch (const InvalidAmountException& e) {
        std::cout << "[Caught InvalidAmountException]: " << e.what() << std::endl;
    }
    catch (const InsufficientFundsException& e) {
        std::cout << "[Caught InsufficientFundsException]: " << e.what() << std::endl;
    }
    catch (const LimitExceededException& e) {
        std::cout << "[Caught LimitExceededException]: " << e.what() << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << "[Caught standard exception]: " << e.what() << std::endl;
    }

}