#include <iostream>

using namespace std;

int main() {
	int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	char ch;
	while(cin >> ch) {
		switch(ch) {
			case 'a':
			case 'A':
				++aCnt;
				break;
			case 'e':
			case 'E':
				++eCnt;
				break;
			case 'i':
			case 'I':
				++iCnt;
				break;
			case 'o':
			case 'O':
				++oCnt;
				break;
			case 'u':
			case 'U':
				++uCnt;
				break;
			default :
				break;
		}
	}

	cout << "A, a : " << aCnt << endl
			<< "E, e : " << eCnt << endl
			<< "I, i : " << iCnt << endl
			<< "O, o : " << oCnt << endl
			<< "U, u : " << uCnt << endl;
	return 0;
}
