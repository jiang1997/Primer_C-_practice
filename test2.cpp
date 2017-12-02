#include <iostream>

using namespace std;

int main() {
	int n = 55;
	int a;
	int &r = n;
//	decltype(n) p = n;

	decltype(a) p;
	cout << p << endl;
	p = 5;
	cout << p << endl;
	return 0;
}
