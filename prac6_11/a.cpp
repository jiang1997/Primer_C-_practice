#include <iostream>

using namespace std;

void reset(int &num);
int main() {
	int a = 3;
	cout << a << endl;
	reset(a);
	cout << a << endl;
	return 0;
}

void reset(int &num) {
	num = 0;
}
