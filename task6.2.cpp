#include <iostream>

using namespace std;

int main() {
	int rows, cols;
	
	cout << "Enter the number of rows (max 3): ";
	cin >> rows;
	if (rows > 3) {
		cout << "Number of rows exceeds maximum limit.";
		return 1;
	}
	cout << "Enter the number of colums(max 3): ";
	cin >> cols;
	if (cols > 3) {
		cout << "Number of columns exceeds maximum limit.";
		return 1;
	}
	
	double **array = new double*[rows];
	for (int i = 0; i < rows; ++i) {
		array[i] = new double[cols];
	}
	
	cout << "Enter the values for the array:\n";
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			cout << "Enter value for element at [" << i << "][" << j << "]: ";
			cin >> array[i][j];
		}
	}
	
	cout << "\nThe array valuea are:\n";
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	
	for (int i = 0; i < rows; ++ i) {
		delete[] array[i];
	}
	delete[] array;
	
	return 0;
	
		
}
