#include <iostream>
#include <vector>

using namespace std;

int main() {
	int arry1[10];
	int arry2[10];
	vector<int> v1;
	vector<int> v2;


	for(size_t index = 0; index < 10; ++index) {
		arry1[index] = arry2[index] = index;
		v1.push_back(index);
	}

	for(size_t index = 0; index < 10; ++index) {
		cout << arry2[index] << endl;
	}

	v2 = v1;
	for(auto num : v2) {
		cout << num << endl;
	}


	return 0;
}
