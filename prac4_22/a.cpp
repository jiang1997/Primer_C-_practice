#include <iostream>

using namespace std;

int main() {
	string finalgrade;
	int grade = 72;
	finalgrade = (grade > 90) ? "high pass"
								: (grade < 60)? "fail"
								: (grade < 75)? "low pass" : "pass";
	//finalgrade = "I am Genius!";
	cout << finalgrade << endl;
	return 0;
}
