//#include <iostream>
//#include <vector>
//
//class MyException : public std::exception {
//public:
//	MyException() = default;
//	~MyException() = default;
//
//	const char* what() const noexcept override {
//		return "Custom error!";
//	}
//};
//
//int main()
//{
//	srand(time(NULL));
//	try {
//		std::vector<int> vect = { 10, 12, 14 };
//		switch (0) {
//		case 0 :
//			std::cout << vect.at(5) << std::endl; break;
//		case 1:
//			throw std::exception("some exception");
//		}
//
//		
//
//		//throw "Error";
//
//		//switch (rand() % 3) {
//		//case 0: throw 404;
//		//case 1: throw "ERROR!";
//		//case 2: throw std::runtime_error("runtime error");
//		//}
//	} 
//	catch (const std::out_of_range& e) {
//		std::cout << "out of range block" << std::endl;
//		std::cout << e.what() << '\n';
//	}
//	catch (const std::exception& e) {
//		std::cout << "first block" << std::endl;
//		std::cout << e.what() << '\n';
//	}
//	catch (...) {
//		std::cout << "unknown error" << std::endl;
//	}
//	//catch (int e) {
//	//	std::cout << e << '\n';
//	//}
//	//catch (const char* e) {
//	//	std::cout << e << '\n';
//	//}
//	//catch (const std::runtime_error& e) {
//	//	std::cout << e.what() << '\n';
//	//}
//}
