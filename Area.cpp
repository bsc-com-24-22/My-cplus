#include <iostream>

double calculateTriangleArea(double base, double height) {
	return 0.5 * base * height;
}

double calculateSquareArea(double side) {
	return  side * side;
}

double calculateRectangleArea(double length, double width) {
	return length * width;
}

int main() {
	char choice;
	
	while (true) {
		std::cout<<"choice any shapeto calculate its area:\n";
		std::cout << "1. Triangle\n";
		std::cout << "2. Square\n";
		std::cout << "3. Rectangle\n";
		std::cout << "Press 'Q' to quit\n";
		std::cout << "Your chice:";
		std::cin >> choice;
		
		if (choice == 'Q') {
			std::cout << "Quit the program\n";
			break;
		}
		
		double area = 0.0;
		
		switch(choice) {
			case '1': {
				double base, height;
				std::cout << "Enter base of the triangle: ";
				std::cin >> base;
				std::cout << "Enter height of the triangle; ";
				std::cin >> height;
				area = calculateTriangleArea(base, height);
				break;
			}
			case '2': {
				double side;
				std::cout << "Enter side of the square: ";
				std::cin >> side;
				area = calculateSquareArea(side);
				break;
	     	}
	    	case '3': {
				double width, length;
				std::cout << "Enter width of the rectangle: ";
				std::cin >> width;
				std::cout << "Enter lenght of the rectangle; ";
				std::cin >> width, length ;
				area = calculateRectangleArea(width, length);
				break;
	
            }
            default:
            	std::cout << "invalide chsoce.Please try again.\n";
            	continue;
            }
            std::cout << "The area is: " << area <<std::endl;
	} 
			return 0; 
			
}
			