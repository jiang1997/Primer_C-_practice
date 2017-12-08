#include <iostream>
#include "Sales_data.h"
using namespace std;
int main() {
	Sales_data bk1(""), bk2("123"), bk3("234", 4, 3.2), bk4;
	//read(bk4, );
	print(bk1, cout);
	print(bk2, cout);
	print(bk3, cout);
	print(bk4, cout);
	cout << bk4.avg_price() << endl;
	return 0;
}
