#include <iostream>
#include "Sales_data.h"
using namespace std;
int main() {
	Sales_data bk1, bk2("123"), bk3("234", 4, 3.2), bk4(cin);
	print(cout, bk1);
	print(cout, bk2);
	print(cout, bk3);
	print(cout, bk4);
	cout << bk4.avg_price() << endl;
	return 0;
}
