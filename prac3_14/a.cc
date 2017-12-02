#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v1;
	int num;
	while(cin >> num) {
		v1.push_back(num);
	}

	for(auto num : v1) {
		cout << num << endl;
	}
	return 0;
}

