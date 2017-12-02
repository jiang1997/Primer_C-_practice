#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
typedef struct Person Person;

struct Person {
private:
	std::string name;
	std::string address;
	std::string getName() const ;
	std::string getAddr() const ;
public:
	Person(const std::string &n, const std::string &a) : name(n), address(a) { }; 
	Person() = default;
friend std::istream &read(std::istream &is, Person &p);
friend std::ostream &print(std::ostream &os, const Person &p);
};

std::istream &read(std::istream &is, Person &p);

std::ostream &print(std::ostream &os, const Person &p);

#endif
