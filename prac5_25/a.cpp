#include <iostream>

using namespace std;

int main() {
	int a, b;
	while(cin >> a >> b) {
		try {
			if(b == 0) {
				throw runtime_error("can't divide by zero");
			}
			a /= b;
		}
		catch(runtime_error e) {
			cout << e.what()
				 << "\nTry Again? Enter y or n" << endl;
			char c;
			cin >> c;
			if(!cin || c == 'n') {
				break;
			}
		}
	}

	cout << a << endl;
	return 0;
}
