#include <iostream>
#include <vector>

using namespace std;
int func(int a, int b) {
	cout << "ok" << endl;
}
int main() {
	vector<int (*)(int a, int b)> vpf{func};
	vpf[0](3,3);
	return 0;
}
