#include "Header.h"

int main() {
	string nameOfFirstFighter, nameOfSecondFighter;
	cout << "Enter the name of the first fighter : ";
	cin >> nameOfFirstFighter;
	cout << "Enter the name of the second fighter : ";
	cin >> nameOfSecondFighter;
	Fight Fight(nameOfFirstFighter, nameOfSecondFighter);
	return 0;
}
