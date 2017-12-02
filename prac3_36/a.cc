#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v1(3,4);
	vector<int> v2(3,4);
	int arr1[4] = {1 ,2 ,3 ,4};
	int arr2[4] = {1, 2 ,3 ,4};
	int index;
	cout << "v1 ++ v2 ??\t" << (v1 == v2) << endl;
	++v1[2];
	cout << "v1 ++ v2 ??\t" << (v1 == v2) << endl;
	cout << "a1 ++ a2 ??\t" << (arr1 == arr2) << endl;

	for(index = 0; index < end(arr1) - begin(arr1) && index < end(arr2) - begin(arr2) && arr1[index] == arr2[index]; ++index) ;
	if(index == end(arr1) - begin(arr1) && index == end(arr2) - begin(arr2)) {
		cout << "a1 == a1 ??\t" << true << endl;
	}
	else {
		cout << "a1 == a1 ??\t" << false<< endl;
	}

	arr1[3] = 0;
	for(index = 0; index < end(arr1) - begin(arr1) && index < end(arr2) - begin(arr2) && arr1[index] == arr2[index]; ++index) ;
	if(index == end(arr1) - begin(arr1) && index == end(arr2) - begin(arr2)) {
		cout << "a1 == a1 ??\t" << true << endl;
	}
	else {
		cout << "a1 == a1 ??\t" << false<< endl;
	}
	return 0;
}
