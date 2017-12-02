#include <iostream>

using namespace std;

void exchange(int *p, int *q);
int main() {
	int a = 4, b = 8;
	cout << a << " " << b << endl;
	exchange(&a, &b);
	cout << a << " " << b << endl;

	return 0;
}

void exchange(int *p, int *q) {
/*
	*p += *q;
	*q = *p - *q;
	*p -= *q;
*/
	*p ^= *q;
	*q ^= *p;
	*p ^= *q;
}


