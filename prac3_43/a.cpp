#include <iostream>

using namespace std;

int main() {
	int ia[3][4] = {{1},{2},{3}};
	for(int (&p)[4] : ia) {
		for(int q : p) {
			cout << q;
		}
	}
	cout << endl;
	//size_t type of index
	for(size_t n1 = 0; n1 < 3; ++n1) {
		for(size_t n2 = 0; n2 < 4; ++n2) {
			cout << ia[n1][n2];
		}
	}
	cout << endl;

	for(int (*p)[4] = begin(ia); p != end(ia); ++p) {
		for(int *q = begin(*p); q != end(*p); ++q) {
			cout << *q;
		}
	}
	cout << endl;

	return 0;
}
