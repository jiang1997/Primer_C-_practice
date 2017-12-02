#include <iostream>
using namespace std;
class Y;
class X {
	Y *p;
};

class Y {
	X p;
};

int main() {
	// your code goes here
	return 0;
}