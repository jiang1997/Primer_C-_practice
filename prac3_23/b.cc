#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v1{1,2,3,4,5,6,7,8,9,10,11};
	vector<int>::iterator it1;
	it1 = v1.begin();
	cout << "it1 = v1.begin() ";
	cout << (*it1) << endl;
	it1 += 2;
	cout << "it1 += 2 ";
	cout << (*it1) << endl;
	cout << (it1 > v1.begin()) << endl;
	cout << (it1 < v1.begin()) << endl;
	return 0;
}
