#include <iostream>

using namespace std;

int main() {
	int i = 2;
	double d = 4.4;
	i *= d;
	i *= static_cast<int>(d);
	return 0;
}
