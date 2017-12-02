#include <iostream>
#include <string>

using namespace std;

int main() {
	const string str("I am genius");
	for(auto &c : str) {
		cout << c;
	}
	cout << endl;
	return 0;
}

