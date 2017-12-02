#include <iostream>

using namespace std;
inline bool isShorter(const string &str1, const string &str2);
int main() {
	cout << isShorter("im genius", "imgenuis") << endl;
	return 0;
}
	
inline bool isShorter(const string &str1, const string &str2) {
	return str1.size() > str2.size();
}

