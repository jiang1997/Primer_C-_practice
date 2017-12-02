#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
	char cs1[] = "abcde";
	char cs2[] = "abcd";
	string str1 = "abcde";
	string str2 = "abcd";
	cout << strcmp(cs1, cs2) << endl;
	cout << strcmp(cs2, cs1) << endl;

	cout << (str1 < str2) << endl;
	cout << (str1 > str2) << endl;
	return 0;
}

