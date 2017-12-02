#include <iostream>

using namespace std;

int main() {
	int i = 0, &r = i;
	auto a = r;
	const int ci = i, &cr = ci;
	auto b = ci;
	auto c = cr;
	auto d = &i;
	auto e = &ci;
	auto &g = ci;
	//const int &z = ci;
	//auto &h = 42;
	const auto &j = 42;
	cout << g << endl;
	cout << a << " " << b << " " << c << " " << d << " " << e << " " << g << endl;
	c = b = a = 42;

	cout << a << " " << b << " " << c << " " << d << " " << e << " " << g << endl;
	
	return 0;
}
