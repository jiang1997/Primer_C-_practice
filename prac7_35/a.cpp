#include <string>
using namespace std;
typedef string Type;
Type initVal();
class Exercise {
public:
	typedef double Type;
	Type setVal(Type);
	Type initVal() {
		return 0;
	}
private:
	int val;
};

double Exercise::setVal(double parm) {
	val = parm + initVal();
	return val;
}
