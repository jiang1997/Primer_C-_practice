#include <iostream>

using namespace std;
int odd[]{1,3,5,7,9};
int even[]{0,2,4,6,8};
decltype(odd) (&arrPtr(int i));
int main() {
	
	for(auto num : arrPtr(2)) {
		cout << num << endl;
	}
	return 0;
}

decltype(odd) (&arrPtr(int i)) {
	return (i % 2)? odd : even;
}

