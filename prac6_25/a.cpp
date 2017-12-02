#include <iostream>

using namespace std;

int main(int argc, char **argv) {
	string str;
	if(argc > 2 ) {
		str = argv[1];
		str += argv[2];
		cout << str << endl;
	}
	return 0;
}

