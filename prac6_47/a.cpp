#include <iostream>
#include <vector>

using namespace std;
void cursion(vector<int>::iterator beg, vector<int>::iterator end);
int main() {
	vector<int> v1{1,2,3,4,5,6,7};
	cursion(v1.begin(), v1.end());
	return 0;
}

void cursion(vector<int>::iterator beg, vector<int>::iterator end) {
	if(beg != end) {
	#ifndef NDEBUG
		cerr << __func__ << "\nrest:" << end - beg << endl;
	#endif
		cout << *beg << endl;
		cursion(++beg, end);
	}
}

