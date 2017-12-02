#include <iostream>
#include "Sales_item.h"

using namespace std;

int main() {
	Sales_item item_sum, item1;
	cin >> item_sum;
	while(cin >> item1) {
		item_sum += item1;
	}
	cout << item_sum << endl;
	return 0;
}
