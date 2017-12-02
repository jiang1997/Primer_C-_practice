#include <iostream>

using namespace std;

bool havCap(const string &s);
void to_lower(string &s);
int main() {
	string s("I AM GENIUS!!");
	cout << havCap("i am genius") << endl;
	cout << havCap("i Am genius") << endl;
	cout << s << endl;
	to_lower(s);
	cout << s << endl;
	return 0;
}

bool havCap(const string &s) {
	for(auto c : s) {
		if(c >= 'A' && c <= 'Z')
			return true;
	}
	return false;
}

void to_lower(string &s) {
	for(auto &c : s) {
		c = tolower(c);
	}
}

