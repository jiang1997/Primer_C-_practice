#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	int &arr[3] = {a, b, c}; //error
	arr[0] = 4;
	arr[1] = 5;
	arr[2] = 6;
	cout << a << " " << b << " " << c << " " << endl;
	return 0;
}
