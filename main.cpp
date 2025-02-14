#include <iostream>
#include <sstream>
#include <fstream>

int main() {
	int num1;
	int num2;
	int sum;
	std::string word;
	std::ifstream inFile;
	std::string currentLine;
	std::stringstream converter;
	std::stringstream ss;

	inFile.open("data.csv");
	
	while (getline(inFile, currentLine)) {
		converter.clear();
		converter.str(currentLine);
		getline(ss, currentLine, ',');
		std::cout << currentLine << std::endl;
	} // end while loop

	return 0;
} // end main
