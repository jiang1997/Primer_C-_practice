#include <iostream>

using namespace std;

int main() {
	int arry[10];
	for(size_t index = 0; index < 10; ++index) {
		arry[index] = index;
	}

	for(size_t num : arry) {
		//cout << arry[index] << endl;
		cout << num << endl;
	}
	return 0;
}
