// Jones_Haley_Chapter5_Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string fileName, townName;
	ifstream inputFile;

	cout << "Enter the name of the data file: ";
	cin >> fileName;

	cout << "Enter the name of the town: ";
	cin.ignore();
	getline(cin, townName);

	inputFile.open(fileName);
	if (!inputFile) {
		cout << "Error: Unable to open file '" << fileName << "'." << endl;
		return 1;
	}

	cout << "\n" << townName << " Population Growth\n";
	cout << "(each * represents 1,000 people)\n";

	int population;
	int year = 1900;

	while (inputFile >> population) {
		cout << year << " ";
		for (int i = 0; i < population / 1000; ++i) {
			cout << "*";
		}
		cout << endl;
		year += 20;
	}
	
	inputFile.close();
	return 0;
}