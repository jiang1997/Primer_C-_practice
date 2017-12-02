#include <iostream>

using namespace std;

int main() {
	int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	char ch;
	while(cin >> ch) {
		switch(ch) {
			case 'a':
				++aCnt;
				break;
			case 'e':
				++eCnt;
				break;
			case 'i':
				++iCnt;
				break;
			case 'o':
				++oCnt;
				break;
			case 'u':
				++uCnt;
				break;
			default :
				break;
		}
	}

	cout << "a : " << aCnt << endl;
	cout << "e : " << eCnt << endl;
	cout << "i : " << iCnt << endl;
	cout << "o : " << oCnt << endl;
	cout << "u : " << uCnt << endl;
	return 0;
}
