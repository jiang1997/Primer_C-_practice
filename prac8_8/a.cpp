#include <iostream>
#include <fstream>
#include "Sales_data.h"
using namespace std;

int main(int argc, char **args) {
	Sales_data bk1, bk2;
	ifstream ifs(args[1]);
	ofstream ofs(args[2], ofstream::app);
	if(read(ifs, bk1)) {
		while(read(ifs, bk2)) {
			if(bk1.isbn() == bk2.isbn()) {
				bk1.combine(bk2);
			}
			else {
				print(ofs, bk1);
				bk1 = bk2;
			}
		}
		print(ofs, bk1);
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
