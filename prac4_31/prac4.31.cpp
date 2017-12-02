// prac4.31.cpp: 主项目文件。

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace System;
using namespace std;

int main(array<System::String ^> ^args)
{
	int a;
	vector<int> ivec(4, 1);
	vector<int>::size_type cnt = ivec.size();

	for(vector<int>::size_type ix = 0; ix != ivec.size(); ++ix, --cnt) {
		ivec[ix] = cnt;
	}

	for(auto it = ivec.begin(); it != ivec.end(); ++it) {
		cout << *it << endl;
	}

	cnt = ivec.size();
	for(vector<int>::size_type ix = 0; ix != ivec.size();) {
		ivec[ix++] = cnt--;
	}

	for(auto it = ivec.begin(); it != ivec.end(); ++it) {
		cout << *it << endl;
	}

	cin >> a;
    return 0;
}
