// Jones_Haley_Chapter5_Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
	int startSize;
	double dailyIncrease;
	int numDays;

	cout << "Enter the starting number of people (minimum 2): ";
	cin >> startSize;
	while (startSize < 2) {
		cout << "Invalid input. Enter a number greater than or equal to 2: ";
		cin >> startSize
	}

	cout << "Enter the average daily population increase (as a percentage, non-negative): ";
	cin >> dailyIncrease;
	while (dailyIncrease < 0) {
		cout << "Invalid input. Enter a non-negative number: ";
		cin << dailyIncrease
	}
	cout << "Enter the number of days the people will mulyiply (minimum 1): ";
	cin >> numDays;
	while (numDays < 1) {
		cout << "Invalid input. Enter a number greater than or equal to 1:";

	}
}