#include "Header.h"

int main() {
	string firstFighterName, secondFighterName;
	cout << "Enter the name of the first fighter : ";
	cin >> firstFighterName;
	cout << "Enter the name of the second fighter : ";
	cin >> secondFighterName;
	Fight fight(firstFighterName, secondFighterName);
	return 0;
}
