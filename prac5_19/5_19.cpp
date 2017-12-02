#include <iostream>
using namespace std;

int main() {
	string str1, str2, rsp;
	do {
		cin >> str1 >> str2;
		cout << (str1.size() < str2.size()? str2 : str1) << endl;
		cin >> rsp;
	} while(!rsp.empty());
	return 0;
}