#include <iostream>
#include <string>
#include "Window_mgr.h" 
#include "Screen.h"
using namespace std; 

int main() {
	// Screen s(6, 6, 'a'), b(6,6), c;
	// c = s;
	// cout << s.get() << endl;
	// cout << b.get() << '1' << endl;
	// cout << c.get() << endl;
	// s.set('Z').display(cout);
	// c.set('Z').display(cout);
	Window_mgr wmgr;
	wmgr.print(cout);
	wmgr.clear(0);
	wmgr.print(cout);
	
	Screen myScreen(5, 5, 'X');
	myScreen.move(4, 0).set('#').display(cout);
	cout << "\n";
	myScreen.display(cout);
	cout << "\n";
	return 0;
}
