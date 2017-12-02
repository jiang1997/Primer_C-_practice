#include <iostream>
#include <vector>
using namespace std;
int recur(vector<int>::iterator cur, vector<int>::iterator end);

int main() {
	vector<int> v1{1,2,3,4,5,6};
	recur(v1.begin(), v1.end());
	return 0;
}

int recur(vector<int>::iterator cur, vector<int>::iterator end) {
	if(cur != end) {
		cout << *cur << endl;
		recur(++cur, end);
	}

}

