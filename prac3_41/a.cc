#include <iostream>
#include <vector>

using namespace std;

int main() {
	int array[] = {5,3,4,8,52,545};
	vector<int> v1(&array[1], &array[5]);

	for(auto num : v1) {
		cout << num << endl;
	}
	return 0;
}

