#include <iostream>

using namespace std;

void exchange(int **p, int **q);

int main() {
	int a = 9, b = 8;
	int *p = &a, *q = &b;
	//const int *w = &a;
	//const int **e = &p;
	cout << *p << " " << *q << endl;
	exchange(&p, &q);
	cout << *p << " " << *q << endl;
	return 0;
}

void exchange(int **p, int **q) {
	int *t;
	t = *q;
	*q = *p;
	*p = t; 
}
