#include <iostream>

using namespace std;

int add(initializer_list<int> il);
int main() {
	cout << add({1,2,3,4,5,6,7}) << endl;
	return 0;
}

int add(initializer_list<int> il) {
	int sum = 0;
	for(const auto &num : il) {
		sum += num;
	}
	return sum;
}

