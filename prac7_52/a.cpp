#include <iostream>
#include <string>
using namespace std;
struct Sales_data {
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

int main() {
	Sales_data item{"1-11", 25, 15.99};
	return 0;
}
