#include <iostream>
#include <string>
using namespace std;

class Screen{
public:
	typedef string::size_type pos;
	Screen() = default;
	Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) { }
	Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') {  }
	char get() const {
		return contents[cursor];
	}
	inline char get(pos row, pos col) const;
	Screen &move(pos r, pos c);
private:
	pos cursor = 0;
	pos height = 0, width = 0;
	string contents;
};
char Screen::get(pos row, pos col) const {
	return contents[height * (row - 1) + col];	
}
int main() {
	Screen s(6, 6, 'a'), b(6,6), c;
	c = s;
	cout << s.get() << endl;
	cout << b.get() << '1' << endl;
	cout << c.get() << endl;
	return 0;
}