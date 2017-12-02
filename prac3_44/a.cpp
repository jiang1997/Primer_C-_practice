#include <iostream>

using namespace std;

typedef int int_array[4];

int main() {
	int ia[3][4]{{2},{4},{6}};
	for(int_array (&p) : ia) {
		for(int q : p) {
			cout << q << endl;
		}
	}

	for(int_array *p = begin(ia); p != end(ia); ++p) {
		for(int *q = begin(*p); q != end(*p); ++q) {
			cout << *q << endl;
		}
	}
	return 0;
}
