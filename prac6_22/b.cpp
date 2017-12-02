#include <iostream>

using namespace std;

int main() {
	int a = 3;
	int *i = &a;
	int *const b = &a;
	int *const*p = &b;

	const int *p2 = &a;
	//const int **s = &i; //error
	int **s = &i;

	return 0;
}
