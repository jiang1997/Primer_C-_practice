#include <iostream>

using namespace std;

int fact(int num) ;
int main() {
	int a = 5;	
	cin >> a;
	cout << fact(a) << endl;
	return 0;
}

int fact(int num) {
	int ret = 1;
	while(num > 0) {
		ret *= num--;
	}

	return ret;
}
