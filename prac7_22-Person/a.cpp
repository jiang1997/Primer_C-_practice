#include <iostream>
#include "Person.h"

using namespace std;

int main() {
	Person p1, p2("genius", "33");
	read(cin, p1);
	print(cout, p1);
	print(cout, p2);
	return 0;
}
