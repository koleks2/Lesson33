//#include <iostream>
//#include <string>
//#include "AgeException.h"
//
//int toInt(const std::string& s);
//void CheckPassword(const std::string& password);
//void vote(const std::string& candidate, int age);
//
//int main() {
//    // task 1
//    /*
//    try {
//        std::cout << toInt("12345") << std::endl;
//        std::cout << toInt("abc") << std::endl;
//    }
//    catch (const std::exception& e) {
//        std::cout << "Error: " << e.what() << std::endl;
//    }
//    */
//    // task 2
//    /*
//    try {
//        CheckPassword("CoolPassword2347");
//        std::cout << "Password is valid!" << std::endl;
//
//        CheckPassword("pswrd");
//    }
//    catch (const std::exception& e) {
//        std::cout << e.what() << std::endl;
//    }
//    */
//    // task 3
//    try{
//        std::cout << "Valid age" << std::endl;
//        vote("Alice", 20);
//
//        std::cout << "\nInvalid age" << std::endl;
//        vote("Bob", 16);
//    }
//        catch (const AgeException& e) {
//        std::cout << "Caught custom exception!" << std::endl;
//        std::cout << "Message: " << e.what() << std::endl;
//        std::cout << "Invalid age was: " << e.getAge() << std::endl;
//    }
//    catch (const std::exception& e) {
//        std::cout << "Caught general exception: " << e.what() << std::endl;
//    }
//}
//
//
//
//int toInt(const std::string& s) {
//    return std::stoi(s);
//}
//void CheckPassword(const std::string& password) {
//    if (password.length() > 8) {
//        throw std::invalid_argument("Error: Password must be at least 8 characters long");
//    }
//
//    bool hasDigit = false;
//    for (char c : password) {
//        if (c >= '0' && c <= '9') {
//            hasDigit = true;
//            break;
//        }
//    }
//
//    if (!hasDigit) {
//        throw std::invalid_argument("Error: Password must contain at least one digit");
//    }
//}