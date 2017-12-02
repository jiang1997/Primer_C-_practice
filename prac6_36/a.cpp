#include <iostream>

using namespace std;

string arr[10]{"1","2","3","4","5","6","7","8","9","10"};
string (&func())[10];
int main() {
	cout << func()[9] << endl;;
	return 0;
}


string (&func())[10] {
	return arr;
}
