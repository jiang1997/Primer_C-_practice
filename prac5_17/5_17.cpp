#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v1{0, 1, 1, 2}, v2{0, 1, 1, 2, 3, 5, 8}, *lv = &v1, *sv = &v2;
	vector<int>::iterator lp, sp;
	if(v1.size() < v2.size()) {
		sv = &v1;
		lv = &v2;
	}
	
	
	for( lp = lv->begin(), sp = sv->begin(); sp != sv->end() && *sp == *lp; ++lp, ++sp) {
		
	}
	
	cout << sv->size() << " " << sp - sv->begin() << endl;
	return 0;
}