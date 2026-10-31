#pragma once
#include <iostream>

class AgeException : public std::exception {
private:
    int age;
    std::string message;

public:
    explicit AgeException(int userAge);

    const char* what() const noexcept override;

    int getAge() const;
};

