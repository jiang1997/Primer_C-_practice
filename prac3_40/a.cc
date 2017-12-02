#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char cs1[] = "I am";
	char cs2[] = "genius!!";
	char cs3[256];

	strcpy(cs3, cs1);
	strcat(cs3, " ");
	strcat(cs3, cs2);

	cout << cs3 << endl;
	return 0;
}
