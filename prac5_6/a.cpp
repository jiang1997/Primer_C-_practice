#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<string> v1{"F", "D", "C", "B", "A", "A++"};
	int grade = 62;
	string lettergrade;

	lettergrade = grade < 60? v1[0] : v1[(grade - 50) / 10] + (grade != 100? (grade % 10 > 7? "+": (grade % 10 < 3? "-": "")): "");
	cout << lettergrade << endl;
	return 0;
}
