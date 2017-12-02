#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<string> v1{"F", "D", "C", "B", "A", "A++"};
	int grade = 91;
	string lettergrade;
	if(grade < 60) {
		lettergrade = v1[0];
	}
	else {
		lettergrade = v1[(grade - 50) / 10];
		if(grade != 100) {
			if(grade % 10 > 7) {
				lettergrade += "+";
			}
			else if(grade % 10 < 3) {
				lettergrade += "-";
			}
		}
	}

	cout << lettergrade << endl;
	return 0;
}
