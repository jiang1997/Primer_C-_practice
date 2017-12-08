class NoDefault {
public:
	NoDefault(int a) { };
};

class C {
public:
	NoDefault nd;
	C() : nd(0) { }

};

int main() {
	C c1;
	return 0;
}
