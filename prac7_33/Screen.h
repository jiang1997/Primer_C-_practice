#ifndef SCREEN_H
#define SCREEN_H
#include <string>
#include <vector>
#include "Window_mgr.h"
class Screen {
public:
	typedef std::string::size_type pos;
	Screen() = default;
	Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) { }
	Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') {  }
	char get() const {
		return contents[cursor];
	}
	inline char get(pos row, pos col) const;
	Screen move(pos r, pos c);
	Screen set(char c);
	Screen set(pos r, pos col, char c);
	Screen const display(std::ostream &os) const;
	Screen display(std::ostream &os);
	pos size() const;

	friend void Window_mgr::clear(Window_mgr::ScreenIndex);
private:
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;
	
	void do_display(std::ostream &os) const { os << contents; }
};
#endif
