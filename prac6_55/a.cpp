#include <iostream>
#include <vector>

using namespace std;

int add(int a, int b) {
	return a + b;
}
int Rminus(int a, int b) {
	return a - b;
}
int multiply(int a, int b) {
	return a * b;
}
int division(int a, int b) {
	return a / b;
}

int main() {
	vector<int (*)(int, int)> vpf{add, Rminus, multiply, division};
	int a = 9, b = 7;
	for(auto &func : vpf) {
		cout << func(a, b) << endl;
	}
	return 0;
}
