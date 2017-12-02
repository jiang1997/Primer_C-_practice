#include <vector>
#include <string>
#include "Window_mgr.h"
#include "Screen.h"

Window_mgr::Window_mgr() : screens{Screen(24, 80, '1')} { }

void Window_mgr::clear(ScreenIndex i) {
	Screen &s = screens[i];
	s.contents = std::string(s.height * s.width, ' ');
}

void Window_mgr::print(std::ostream &os) {
	screens[0].display(os);
}
