#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v1;
	int num;
	while(cin >> num) {
		v1.push_back(num);
	}

	for(decltype(v1.size()) index = 0; index < v1.size() / 2 + v1.size() % 2; ++index) {
		cout << v1[index] + v1[v1.size() - index - 1] << endl;
	}
	return 0;
}

