#include <iostream>

int main() {
	int number;
	
	std::cout << "enter a number between 5 and 10:";
	std::cin >> number;
	
	while (number < 5 || number > 10) {
		std::cout<<"You entered an invalide number. Please try again!";
		std::cin >>number;
		
	}
	// once a valid number is entered, display a massage
	std::cout << "input" "is accepted."<< std::endl;
		return 0;
} 