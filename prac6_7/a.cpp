#include <iostream>

using namespace std;

size_t count_calls();
int main() {
	for(int n = 0; n < 10; ++n) {
		cout << count_calls() << endl;
	}
	return 0;
}

size_t count_calls() {
	static size_t ctr = 0;
	return ctr++;
}
