#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main() {
	vector<string> vec;
	string word;
	ifstream ifs("in");
	while(ifs >> word) {
		vec.push_back(word);
	}

	for(auto s : vec) {
		cout << s << endl;
	}
	return 0;
}
