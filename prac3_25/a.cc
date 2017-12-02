#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v1(11, 0);
	vector<int>::iterator it1 = v1.begin();
	int grade;
	while(cin >> grade) {
		*(it1 + grade / 10) += 1;
	}

	for(auto num : v1) {
		cout << num << endl;
	}
	return 0;
}

