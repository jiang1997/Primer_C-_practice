#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v1{1,2,3,4,5};
	v1 = {5,4,3,2,1,5,5,5,5,55};
	for(auto num : v1) {
		cout << num << endl;
	}
	return 0;
}
