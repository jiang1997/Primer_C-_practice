#include <string>
class Vehicle{
public:
	std::string type;
	std::string brand;
	int weight;
	int height;
	int max_speed;

	Vehicle(const std::string &t, const std::string &b, int w, int h) : type(t), brand(b), weight(w), height(h) { }
	Vehicle(int w, int h) : Vehicle("unknow", "unknow", w, h)  { }
	Vehicle(std::string t, std::string b) { }
};
