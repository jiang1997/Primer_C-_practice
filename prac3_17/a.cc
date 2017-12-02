#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<string> v1;
	string str;
	while(cin >> str) {
		v1.push_back(str);
	}

	for(auto &str : v1) {
		for(auto &c : str) {
			c = toupper(c);
		}
		cout << str << endl;
	}


	return 0;
}
