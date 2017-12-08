#include <string>
class Vehicle{
public:
	std::string type;
	std::string brand;
	int weight;
	int height;
	int max_speed;

	Vehicle(int w, int h) : weight(w), height(h)  { }
	Vehicle(std::string t, std::string b) { }
}
