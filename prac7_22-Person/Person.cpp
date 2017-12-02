#include <iostream>
#include <string>
#include "Person.h"

std::string Person::getName() const {
	return this->name;
}

std::string Person::getAddr() const {
	return this->address;
}
std::istream &read(std::istream &is, Person &p) {
	is >> p.name >> p.address;
	return is;
}

std::ostream &print(std::ostream &os, const Person &p) {
	os << p.name << " " << p.address << std::endl;
	return os;
}
