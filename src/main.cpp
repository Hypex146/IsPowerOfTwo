#include <iostream>
#include "func.hpp"


int main(int argc, char *argv[]) {
	if (argc != 2) {
		std::cout << "An argument is needed" << std::endl;
		return 0;
	}
	int a = std::stoi(argv[1]);
	std::cout << std::boolalpha;
	std::cout << "the result of the function \"isPowerOfTwoA\": " << isPowerOfTwoA(a) << std::endl;
	std::cout << "the result of the function \"isPowerOfTwoB\": " << isPowerOfTwoB(a) << std::endl;
	std::cout << "the result of the function \"isPowerOfTwoC\": " << isPowerOfTwoC(a) << std::endl;
	std::cout << "the result of the function \"powerOfTwoA\": " << powerOfTwoA(a) << std::endl;
	std::cout << "the result of the function \"powerOfTwoB\": " << powerOfTwoB(a) << std::endl;
	std::cout << "the result of the function \"powerOfTwoC\": " << powerOfTwoC(a) << std::endl;
	return 0;
}
