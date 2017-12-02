#include <iostream>

using namespace std;

int abs(int num); 

int main() {
	cout << abs(6) << endl;
	cout << abs(-6) << endl;
	cout << abs(0) << endl;
	return 0;
}

int abs(int num) {
	num *= num < 0? -1: 1;
	return num;
}
