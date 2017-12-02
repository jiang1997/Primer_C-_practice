#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v1{2,3,4,5,6,7};
	for(auto &num : v1) {
		num % 2? num *= 2: num;
	}
	
	for(auto &num : v1) {
		cout << num << endl;
	}
	return 0;
}
