#include <iostream>

using namespace std;

int main() {
	int a = 0;
	a = 1 << (sizeof(int) * 8 - 1);
	--a;
	cout << a << endl;
	++a;
	cout << a << endl;
	return 0;
}
