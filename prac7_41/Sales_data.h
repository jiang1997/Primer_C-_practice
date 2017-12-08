#ifndef SALE_DATA_H
#define SALE_DATA_H
#include <iostream>
#include <string.h>
#include <iostream>
typedef struct Salse_data Salse_data;

struct Sales_data {
private:
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;

	std::string isbn() const {
		return this->bookNo;
	}
public:
	Sales_data& combine(const Sales_data &rhs) {
		this->units_sold += rhs.units_sold;
		revenue += rhs.revenue;
		return *this;
	}

	Sales_data(const std::string &s, int n, double p) : bookNo(s), units_sold(n), revenue(n * p) {
		std::cout << "be called" << std::endl;
	}
	Sales_data(const std::string &s) : Sales_data(s, 233, 0) {
		std::cout << "afer delegate" << std::endl;
	}
	Sales_data(std::istream &is = std::cin); 
	//Sales_data() : units_sold(0), revenue(0) { }
	double avg_price();

	friend std::istream &read(Sales_data &bk, std::istream &in);
	friend std::ostream &print(const Sales_data &bk, std::ostream  &out);
	friend Sales_data add(const Sales_data &bk1, const Sales_data &bk2);
};

Sales_data add(const Sales_data &bk1, const Sales_data &bk2) {
	Sales_data ret("");
	ret.bookNo = bk1.units_sold;
	ret.units_sold = bk1.units_sold + bk2.units_sold;
	ret.revenue = bk1.revenue + bk2.revenue;
	return ret;
}
std::istream &read(Sales_data &bk, std::istream &in) {
	double price = 0;
	in >> bk.bookNo >> bk.units_sold >> price;
	bk.revenue = price * bk.units_sold;
	return in;
}

std::ostream &print(const Sales_data &bk, std::ostream  &out) {
	out << bk.bookNo << ' ' << bk.units_sold << ' ' << bk.revenue << std::endl;
	return out;
}

Sales_data::Sales_data(std::istream &is) {
	read(*this, is);
}

inline double Sales_data::avg_price() {
	return units_sold? revenue / units_sold : 0;
}
#endif
