#include "Header.h"
#include <string>
#include <iostream>

using namespace std;

int main() {
	string first, second;
	cout << "Enter the name of the first fighter : ";
	cin >> first;
	cout << "Enter the name of the second fighter : ";
	cin >> second;
	Fight Fight(first, second);
	return 0;
}
