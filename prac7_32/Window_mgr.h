#ifndef WINDOW_MGR_H
#define WINDOW_MGR_H
#include <vector>
#include <iostream>
class Screen;
class Window_mgr {
public:
	using ScreenIndex = std::vector<Screen>::size_type;
	Window_mgr();
	void clear(ScreenIndex );
	void print(std::ostream &os);
private:
	std::vector<Screen> screens;
};
/*
void Window_mgr::clear(ScreenIndex i) {
	Screen &s = screens[i];
	s.contents = string(s.height * s.width, ' ');
}
*/
#endif
