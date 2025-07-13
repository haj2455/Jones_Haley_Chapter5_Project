// Jones_Haley_Chapter5_Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout << "Pattern A         Pattern B" << endl;

	for (int i = 1; i <= 10; i++) {

		for (int j = 1; j <= i; j++) {
			cout << "+";
		}

		cout << setw(14 - i);

		for (int j = 1; j <= 11 - i; j++) {
			cout << "+";
		}
		cout << endl;
	}

	return 0;
}