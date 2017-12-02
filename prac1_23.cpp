#include <iostream>
#include "Sales_item.h"

using namespace std;

int main() {
	Sales_item item1, item2;
	if(cin >> item1) {
		while(cin >> item2) {
			if(item1.isbn() == item2.isbn()) {
				item1 += item2;
				while(cin >> item2 && item2.isbn() == item1.isbn()) {
					item1 += item2;
				}
			}
			cout << item1 << endl;
			item1 = item2;
		}
		if(item1.isbn() != item2.isbn()) {
			cout << item1 << endl;
		}
	}
	else {
		cout << "No data?!" << endl;
	}
	return 0;
}

