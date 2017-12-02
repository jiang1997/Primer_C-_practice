#include <iostream>

using namespace std;

int main() {
	int array[]{1,2,3,4,5,6,7};
	int *p;
	for(auto num : array) {
		cout << num << endl;
	}
	for(p = array; p != end(array); ++p) {
		*p = 0;
	}

	for(auto num : array) {
		cout << num << endl;
	}
	return 0;
}
