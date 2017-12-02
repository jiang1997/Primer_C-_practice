#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v1;		//0
	vector<int> v2(10);	//10 0
	vector<int> v3(10, 42); //10 42
	vector<int> v4{10};	//1 10
	vector<int> v5{10, 42};	//2 10,42
	vector<string> v6{10};	//10 0
	vector<string> v7{10, "hi"}; //10 "hi"

	cout << "v1 " << v1.size() <<endl;
	for(auto n : v1) {
		cout << n << endl;
	}
	cout << "v2 " << v2.size() <<endl;
	for(auto n : v2) {
		cout << n << endl;
	}
	cout << "v3 " << v3.size() <<endl;
	for(auto n : v3) {
		cout << n << endl;
	}
	cout << "v4 " << v4.size() <<endl;
	for(auto n : v4) {
		cout << n << endl;
	}
	cout << "v5 " << v5.size() <<endl;
	for(auto n : v5) {
		cout << n << endl;
	}
	cout << "v6 " << v6.size() <<endl;
	for(auto n : v6) {
		cout << n << endl;
	}
	cout << "v7 " << v7.size() <<endl;
	for(auto n : v7) {
		cout << n << endl;
	}

	return 0;
}
