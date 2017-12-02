#include <iostream>

using namespace std;

int main() {
	int ffCnt = 0, flCnt = 0, fiCnt = 0;
	char ch;
	while(cin >> ch) {
		if(ch == 'f') {
			cin >> ch;
			switch(ch) {
				case 'f':
					++ffCnt;
					break;

				case 'l':
					++flCnt;
					break;

				case 'i':
					++fiCnt;
					break;
				default :
					break;
			}
		}
	}

	cout << "ff : " << ffCnt << endl
		<< "fl : " << flCnt << endl
		<< "fi : " << fiCnt << endl;
	return 0;
}
