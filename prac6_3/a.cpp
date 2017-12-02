#include <iostream>

using namespace std;

int fact(int num) ;
int main() {
	int a = 5;	
	cout << fact(a) << endl;
	cout << fact(10) << endl;
	return 0;
}

int fact(int num) {
	int ret = 1;
	while(num > 0) {
		ret *= num--;
	}

	return ret;
}
