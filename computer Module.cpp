#include <iostream>
#include<fstream>
#include <string>
#include<sstream>
#include<cctype>
#include<algorithm>

int countVowels(const std::string& str){
	int count = 0;
	
	return 0;
}

int countWords(const std::string& str){
	int wordCount = 0;
	
	return 0;
}
void reverseString(std::string& str) {
	std::reverse(str.begin(), str.end());
	
}

void capitalizedSecondLetter(std::string& str) {
	if (str.length() >= 2 ){
		str[1] =std::toupper(str[1]);
	}
}

int main() {
	std::ifstream file("Programming,txt");
	std::string filedata;
	std::string line;
	while (std::getline(file, line)){
		
	}
	int vowelCount = countVowels(filedata);
	std::cout << "number of vowels in the file: " <<vowelCount << std::endl;
	
	int wordCount = countWords(filedata);
	std::cout << "number of words in the file: " << wordCount << std::endl;
	
	reverseString(filedata);
	std::cout << "Reversed content of the file:\n" << std::endl;
	
	capitalizedSecondLetter(filedata);
	std::cout << "content with second letter capistalized:\n" << filedata << std::endl;
	
    return 0;

}
 
 	
 
	 
 