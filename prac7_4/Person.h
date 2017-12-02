#ifndef PERSON_H
#define PERSON_H
#include <string>
typedef struct Person Person;

struct Person {
	std::string name;
	std::string address;
	std::string getName() const ;
	std::string getAddr() const ;
};

std::string Person::getName() const {
	return this.name;
}

std::string Person::getAddr() const {
	return this.address;
}

#endif
