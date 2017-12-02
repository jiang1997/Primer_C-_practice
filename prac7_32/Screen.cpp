#include "Window_mgr.h"
#include "Screen.h"
using namespace std;

char Screen::get(pos row, pos col) const {
	return contents[cursor];	
}

Screen const Screen::display(std::ostream &os) const {
	do_display(os);
	return *this;
}

Screen Screen::display(std::ostream &os) {
	do_display(os);
	return *this;
}

Screen Screen::set(char c) {
	contents[cursor] = c;
	return *this;
}

Screen Screen::set(pos r, pos col, char c) {
	contents[r * width + col] = c;
	return *this;
}

Screen Screen::move(pos row, pos col) {
	cursor = row * width + col;
	return *this;
}
