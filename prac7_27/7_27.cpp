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
	Screen &set(char c);
	Screen &set(pos r, pos col, char c);
	Screen const &display(std::ostream &os) const;
	Screen &display(std::ostream &os);
private:
	pos cursor = 0;
	pos height = 0, width = 0;
	string contents;
	
	void do_display(std::ostream &os) const { os << contents; }
};

char Screen::get(pos row, pos col) const {
	return contents[cursor];	
}

Screen const &Screen::display(std::ostream &os) const {
	do_display(os);
	return *this;
}

Screen &Screen::display(std::ostream &os) {
	do_display(os);
	return *this;
}

Screen &Screen::set(char c) {
	contents[cursor] = c;
	return *this;
}

Screen &Screen::set(pos r, pos col, char c) {
	contents[r * width + col] = c;
	return *this;
}

Screen &Screen::move(pos row, pos col) {
	cursor = row * width + col;
	return *this;
}

int main() {
	// Screen s(6, 6, 'a'), b(6,6), c;
	// c = s;
	// cout << s.get() << endl;
	// cout << b.get() << '1' << endl;
	// cout << c.get() << endl;
	// s.set('Z').display(cout);
	// c.set('Z').display(cout);
	Screen myScreen(5, 5, 'X');
	myScreen.move(4, 0).set('#').display(cout);
	cout << "\n";
	myScreen.display(cout);
	cout << "\n";
	return 0;
}