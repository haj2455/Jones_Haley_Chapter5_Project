// Jones_Haley_Chapter5_Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
using namespace std;

int main() {

	random_device myEngine;
	uniform_int_distribution<> randomInt(0, 100);

	int secretNumber = randomInt(myEngine);
	int guess;
	int guessCount = 0;

	cout << "Guess the number (Between 0 and 100): ";

	do {
		cin >> guess;
		guessCount++;

		if (guess > secretNumber) {
			cout << "Number is too high. Guess again: ";
		}
		else if (guess < secretNumber) {
			cout << "Number is too low. Guess again: ";
		}
		else {
			cout << "Hooray! You have guess the number correctly in " << guessCount << " tries." << endl;
		}
	} while (guess != secretNumber);

	return 0;
}