#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

int main() {
	vector<string> vec;
	string str;
	ifstream ifs("in");
	while(getline(ifs, str)) {
		vec.push_back(str);
	}
/*
	for(auto it = vec.begin(); it != vec.end(); ++it) {
		cout << *it << endl;
	}
	*/
	for(auto str : vec) {
		cout << str << endl;
	}
	return 0;
}
