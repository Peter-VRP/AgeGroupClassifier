#include <iostream>

using namespace std;

int main() {

	int age;
	string category;

	cout << "Enter your age:";
	cin >> age;

	if (age >= 65) {
		category = "Senior";
	}
	else if (age < 65 && age >= 20) {
		category = "Adult";
	}
	else if (age < 20 && age >= 12) {
		category = "Teen";
	}
	else {
		category = "Child";
	}

	return 0;
}