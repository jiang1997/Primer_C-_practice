#include <iostream>

using namespace std;

void exchange(int &a, int &b);
int main() {
	int a = 4, b = 9;
	cout << a << " " << b << endl;
	exchange(a, b);
	cout << a << " " << b << endl;
	return 0;
}


void exchange(int &a, int &b) {
	a ^= b;
	b ^= a;
	a ^= b;
}
