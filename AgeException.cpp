#include "AgeException.h"
#include <iostream>
#include <string>

AgeException::AgeException(int userAge) : age(userAge) {
    message = "AgeException: Age " + std::to_string(age) + " is less than 18. Voting denied";
}

const char* AgeException::what() const noexcept {
    return message.c_str();
}

int AgeException::getAge() const {
    return age;
}

void vote(const std::string& candidate, int age) {
    if (age < 18) {
        throw AgeException(age);
    }
    std::cout << "Vote registered successfully for candidate: " << candidate << std::endl;
}