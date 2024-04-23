#include <iostream>
#include <string>

int main() {
	std:: string alphanumericArray[] = { "B123", "C234","A345", "C15", "B177", "G3003", "C235", "B179" };
	for (int i = 0; i < 8; ++i) {
		if (alphanumericArray[i].front() ='B') {
			std::cout << "Element starting with 'B': " << alphanumericArray[i] << std::endl;
		}
	}
	
	return 0;
}