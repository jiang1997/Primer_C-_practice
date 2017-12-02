#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v1;
	int num;
	while(cin >> num) {
		v1.push_back(num);
	}

	for(decltype(v1.size()) index = 1; index < v1.size(); ++index) {
		cout << v1[index] + v1[index - 1] << endl;
	}

	return 0;
}
