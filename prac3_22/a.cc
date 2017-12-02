#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<string> v1;
	string str;
	vector<string>::iterator it1;

	while(getline(cin, str)) {
		v1.push_back(str);
	}
	for(it1 = v1.begin(); it1 != v1.end() && !(it1->empty()); ++it1) {
		for(auto &c : *it1) {
			c = toupper(c);
		}
		cout << *it1;
	}
	cout << endl;

	return 0;
}
