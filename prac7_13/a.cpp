#include <iostream>
#include "Sales_data.h"
using namespace std;

int main() {
	Sales_data bk1(cin), bk2;
	if(cin) {
		while(read(cin, bk2)) {
			if(bk1.isbn() == bk2.isbn()) {
				bk1.combine(bk2);
			}
			else {
				print(cout, bk1);
				bk1 = bk2;
			}
		}
		print(cout, bk1);
	}
	else {
		cout << "invalid input" << endl;
	}
	/*while(read(cin, bk1)) {
		if(read(cin, bk2)) {
			while(bk1.isbn() == bk2.isbn()) {
				bk1.combine(bk1);
			}
			
		}
		else {
		}
	}*/
	return 0;
}
