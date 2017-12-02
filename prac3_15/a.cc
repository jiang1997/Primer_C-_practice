#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	vector<string> vs;
	string str;
	while(cin >> str) {
		vs.push_back(str);
	}

	for(auto s : vs) {
		cout << s << endl;
	}

	return 0;
}

