#include <iostream>

using namespace std;

void print(const int *arr, size_t num);
void print(const int *begin, const int *end);
void print(const int (&arr)[2]);
void print(const int num);
//void print(const int arr[10]); //=> (const int *arr)
int main() {
	int i = 0, j[2] = {0, 2};
	print(j, 2);
	print(begin(j), end(j));
	print(j);
	print(i);

	print(j);
	return 0;
}

void print(const int *arr, size_t num) {
	for(size_t index = 0; index < num; ++index) {
		cout << arr[index] << endl;
	}
}

void print(const int *beg, const int *end) {
	for(; beg != end; ++beg) {
		cout << *beg << endl;
	}
}

void print(const int (&arr)[2]) {
	cout << " (" << endl;
	for(auto elem : arr) {
		cout << elem << endl;
	}
}

void print(const int num) {
	cout << num << endl;
}

void print(const int arr[10]) {
	const int *beg = arr, *end = arr + 10;
	cout << "A" << endl;
	for(; beg != end; ++beg) {
		cout << *beg << endl;
	}
}
