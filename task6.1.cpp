#include <iostream>
#include <string>

int main() {
	int*dynamicInt = new int;
	std::string*dynamicString = new std::string;
	
	std::cout << "Enter an integer: ";
	std::cin>> *dynamicInt;
	
	std::cout << "Enter a string value: ";
	std::cin >> *dynamicString;
	
	std::cout << "Allocated integer value: " << *dynamicInt << std::endl;
	std::cout << "Allocated string value: " << *dynamicString << std::endl;
	
	delete dynamicInt;
	delete dynamicString;
	
	return	0;
	
	}
	