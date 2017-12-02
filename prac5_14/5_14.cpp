#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<string> v1;
	string str, rep;
	int maximum = 0;
	
	while(cin >> str) {
		v1.push_back(str);
	}
	
	for(auto p = v1.begin(); p != v1.end(); ++p) {
		auto q = p;
		for(++q ; *p == *q && q != v1.end(); ++q) {
			
		}
		if(q - p > maximum) {
			maximum = q - p;
			rep = *p;
		}
	}
	
	cout << rep << " : " << maximum << endl;
	cout << v1.size() << endl;
	return 0;
}