#ifndef SALE_DATA_H
#define SALE_DATA_H

#include <string.h>
struct Sales_data {
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;

	std::string isbn() const {
		return this->bookNo;
	}

	Sales_data& combine(const Sales_data &rhs) {
		this->units_sold += rhs.units_sold;
		this->revenue += rhs.revenue;
		return *this;
	}
};

#endif
