#include <iostream>

using namespace std;

void f(double n1, int n2) {
	cout << n1 << " " << n2 << endl;
}

void f(int n1) {
	cout << n1 << endl;
}

void f(int n1, int n2) {
	cout << n1 << " " << n2 << endl;
}

void f(double n1, double n2) {
	cout << n1 << " " << n2 << endl;
}

int main() {
	f(2.56, 42);
	f(42);
	f(42, 0);
	f(2.56, 3.14);
}

