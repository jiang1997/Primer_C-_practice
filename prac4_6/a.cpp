#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<string> v1{"I am genius!", "Absolutely!", ""};
	vector<string>::iterator iter = v1.begin();
	cout << *iter++ << endl;
	cout << *iter << endl;
	iter = v1.begin();
	//cout << *iter.empty() << endl; has no member named empty
	cout << iter->empty() << endl;
	//cout << ++*iter << endl;  equal ++(*iter)
	iter += 2;
	cout << iter++->empty();
	return 0;
}
