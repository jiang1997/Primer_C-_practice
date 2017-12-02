#include <iostream>

using namespace std;

int main() {
	int a, b;
	(true? a: b) = 666;
	cout << "a: " << a << '\n' << "b: " << b << endl;
	{
		cout << "this is implemented from a block" << endl;
	}
	return 0;
}
