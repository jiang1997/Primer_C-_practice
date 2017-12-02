#include <iostream>

using namespace std;
typedef string strArr[10];

string arr[]{"1","2","3","4","5","6","7","8","9","10"};
//string (&func())[10];
//decltype(arr) &func();
//auto func() ->string(&) [10];
strArr &func();
int main() {
	cout << func()[2] << endl;
	return 0;
}

strArr &func() {
//auto func() ->string(&) [10] {
//decltype(arr) &func() {
//string (&func())[10] {
	return arr;
}

