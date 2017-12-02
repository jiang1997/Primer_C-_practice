#ifndef SALE_DATA_H
#define SALE_DATA_H
#include <string.h>
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

	Sales_data(const std::string &s, int n, double p) : bookNo(s), units_sold(n), revenue(n * p) { }
	Sales_data(const std::string &s) : bookNo(s) { }
	Sales_data(std::istream &is); 
	Sales_data() : units_sold(0), revenue(0) { }
	double avg_price();

	friend std::istream &read(std::istream &in, Sales_data &bk);
	friend std::ostream &print(std::ostream  &out, const Sales_data &bk);
	friend Sales_data add(const Sales_data &bk1, const Sales_data &bk2);
};

Sales_data add(const Sales_data &bk1, const Sales_data &bk2) {
	Sales_data ret;
	ret.bookNo = bk1.units_sold;
	ret.units_sold = bk1.units_sold + bk2.units_sold;
	ret.revenue = bk1.revenue + bk2.revenue;
	return ret;
}

std::istream &read(std::istream &in, Sales_data &bk) {
	double price = 0;
	in >> bk.bookNo >> bk.units_sold >> price;
	bk.revenue = price * bk.units_sold;
	return in;
}

std::ostream &print(std::ostream  &out, const Sales_data &bk) {
	out << bk.bookNo << ' ' << bk.units_sold << ' ' << bk.revenue << std::endl;
	return out;
}

Sales_data::Sales_data(std::istream &is) {
	read(is, *this);
}

double Sales_data::avg_price() {
	return units_sold? revenue / units_sold : 0;
}
#endif
