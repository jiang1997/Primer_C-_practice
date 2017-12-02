#include <iostream>

using namespace std;
constexpr bool isShort(const string &s1, const string &s2);
int main() {
	cout << isShort("sdf", "3") << endl;
	return 0;
}

constexpr bool isShort(const string &s1, const string &s2) {
	return s1.size() < s2.size();
}

