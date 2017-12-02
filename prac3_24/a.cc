#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v1{1,2,3,4,5,6,7,8};
	vector<int>::iterator beg(v1.begin());
	vector<int>::iterator end(v1.end());
	end -= 1;
	for(;end > beg; --end, ++beg) {
		cout << (*beg) + (*end) << endl;
	}
	return 0;
}
