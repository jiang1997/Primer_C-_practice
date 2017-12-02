#include <iostream>
#include <string>

using namespace std;

int main() {
	string str("i am genius");
	cout << str << endl;
	for(char &c : str) {
		c = 'X';	
	}
	cout << str << endl;
	return 0;
}

