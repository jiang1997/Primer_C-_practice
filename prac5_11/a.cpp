#include <iostream>

using namespace std;

int main() {
	int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	int spCnt = 0, tbCnt = 0, etCnt = 0;
	char ch;
	while(cin >> ch) {
		cout << static_cast<int>(ch) << endl;
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

			case ' ':
				++spCnt;
				break;

			case '\t':
				++tbCnt;
				break;

			case '\n':
				++etCnt;
				break;

			default :
				break;
		}
	}

	cout << "A, a : " << aCnt << endl
			<< "E, e : " << eCnt << endl
			<< "I, i : " << iCnt << endl
			<< "O, o : " << oCnt << endl
			<< "U, u : " << uCnt << endl
			<< "Space: " << spCnt << endl
			<< "t  : " << tbCnt << endl
			<< "n  : " << etCnt << endl;

	return 0;
}
