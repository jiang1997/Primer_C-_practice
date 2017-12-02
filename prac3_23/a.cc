#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v1(10,5);
	vector<int>::iterator it1;
	for(it1 = v1.begin(); it1 != v1.end(); ++it1) {
		*it1 *= 2;
	}
	for(it1 = v1.begin(); it1 != v1.end(); ++it1) {
		cout << (*it1) << endl;
	}
	return 0;
}
