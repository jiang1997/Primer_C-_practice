#include <iostream>
using namespace std;

istream &fun(istream &is);
int main() {
	fun(cin);
	return 0;
}

istream &fun(istream &is) {
	int a;
	while(is >> a) cout << a << endl;
	is.clear();
	return is;
}
