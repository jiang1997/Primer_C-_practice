#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v1(3, 4);
	int array[16]{}, index = 0;
	v1[1] = 0;
	
	for(auto it = v1.begin(); it != v1.end(); ++it, ++index) {
		array[index] = *it;
	}

	for(int num : array) {
		cout << num << endl;
	}

	return 0;
}
