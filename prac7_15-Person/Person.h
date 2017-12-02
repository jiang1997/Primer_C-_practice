#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
typedef struct Person Person;

struct Person {
	std::string name;
	std::string address;
	std::string getName() const ;
	std::string getAddr() const ;
	Person(const std::string &n, const std::string &a) : name(n), address(a) { }; 
	Person() = default;
};

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
#endif
