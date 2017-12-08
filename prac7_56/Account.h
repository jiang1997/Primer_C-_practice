#include <string>
class Account {
public:
	void calculate() { amount += amount * interestRate; }
	static double rate() { return interestRate; }
	static void rate(double);
private:
	std::string owner;
	double amount;
	static double interestRate;
	static double initRate();
	static constexpr int period = 30;
	double daily_tb1[period];
};
double Account::initRate() {
	return 4.1;
}
double Account::interestRate = initRate();
constexpr int Account::period;
