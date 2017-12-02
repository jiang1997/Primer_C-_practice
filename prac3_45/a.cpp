#include <iostream>

using namespace std;

int main() {
	int ia[3][4]{{1},{7},{4}};
	for(auto &p : ia) {
		for(auto q : p)  {
			cout << q << endl;
		}
	}

	for(auto p = begin(ia); p != end(ia); ++p) {
		for(auto q = begin(*p); q != end(*p); ++q) {
			cout << *q << endl;
		}
	}
	return 0;
}
