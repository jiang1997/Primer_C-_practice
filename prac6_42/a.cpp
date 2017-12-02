#include <iostream>

using namespace std;

string shorterString(size_t ctr, const string &word, const string &ending = "s"); 
int main() {
	cout << shorterString(2, "cat") << endl;
	return 0;
}

string shorterString(size_t ctr, const string &word, const string &ending) {
	return (ctr > 1) ? word + ending : word;
}

