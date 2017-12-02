#include <iostream>
#include <string>
#include "Sales_data.h"

using namespace std;
int main() {
	struct Sales_data item1, item2;
	double total = 0;
	cin >> item1.bookNo >> item1.units_sold >> total;
	total *= item1.units_sold;
	item1.revenue = total;
	cout << item1.bookNo << " " << item1.units_sold << " " << item1.revenue << endl;

	cin >> item2.bookNo >> item2.units_sold >> total;
	total *= item2.units_sold;
	item2.revenue = total;
	cout << item2.bookNo << " " << item2.units_sold << " " << item2.revenue << endl;

	if(item1.bookNo == item2.bookNo) {
		unsigned totalCnt = item1.units_sold + item2.units_sold;
		double totalRevenue = item1.revenue + item2.revenue;

		cout << item1.bookNo << " " << totalCnt << " " << totalRevenue << " ";
		if(totalCnt != 0) {
			cout << totalRevenue / totalCnt << endl;
			return 0;
		}
		else {
			cerr << "Data must refer to the same ISBN" << endl;
			return -1;
		}
	}

}

