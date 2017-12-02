#include <iostream>
using namespace std;

int main() {
	string last, cur;
	while(cin >> cur) {
		if(cur[0] < 'A' || cur[0] > 'Z') {
			continue ;
		}

		if(cur == last) {
			cout << cur << endl;
			break;
		}
		else {
			last = cur;
		}
	}
	return 0;
}
