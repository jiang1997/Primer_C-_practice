#include <iostream>

using namespace std;
int max(int, int *);
int main() {
	int a = 3, b = 8;
	cout << max(a, &b) << endl;
	return 0;
}

int max(int n1, int *n2) {
	return n1 < *n2? *n2 : n1;
}
