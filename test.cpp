#include <iostream>

using namespace std;
int main() {
	unsigned u = 10;
	int i = -42;
	int a = 100, sum = 0;
	cout << i + i << endl;
	cout << u + i << endl;
	for(int a = 0; a != 10; ++a)
		sum += a;
	cout << a << " " << sum << endl;
	return 0;
}
