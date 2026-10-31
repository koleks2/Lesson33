#pragma once
#include <iostream>

class InvalidAmountException : public std::runtime_error {
public:
    explicit InvalidAmountException(const std::string& message)
        : std::runtime_error(message) {}
};

class InsufficientFundsException : public std::runtime_error {
public:
    explicit InsufficientFundsException(const std::string& message)
        : std::runtime_error(message) {}
};

class LimitExceededException : public std::runtime_error {
public:
    explicit LimitExceededException(const std::string& message)
        : std::runtime_error(message) {}
};