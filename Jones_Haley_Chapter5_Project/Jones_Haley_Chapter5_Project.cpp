// Jones_Haley_Chapter5_Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ifstream inputFile("Lineup.txt");
	string name;
	string first, last;
	int count = 0;

	if (!inputFile) {
		cout << "Error: Could not open the file 'Lineup.txt'." << endl;
		return 1;
	}

	inputFile >> name;
	if (inputFile) {
		first = name;
		last = name;
		count = 1;
	}

	while (inputFile >> name) {
		count++;
		if (name < first) {
			first = name;
		}
		if (name > last) {
			last = name;
		}
	}
	inputFile.close();

	if (count == 0) {
		cout << "No student names found in the file 'Lineup.txt'." << endl;
	}
	else {
		cout << "Number of students: " << count << endl;
		cout << "First in line: " << first << endl;
		cout << "Last in line: " << last << endl;
	}

	return 0;
}