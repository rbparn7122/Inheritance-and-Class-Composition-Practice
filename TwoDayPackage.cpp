#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "TwoDayPackage.h"

using namespace std;


TwoDayPackage::TwoDayPackage(const string& name,
	const string &address, const string &city, const string &state, const string &zip, double weight, double cost, double two)

	: Package(name, address, city, state, zip, weight, cost) {
	setTwoDay(two);
}

void TwoDayPackage::setTwoDay(double two) {
	if (two < 0.0) {
		throw invalid_argument("Overnight Shipping must be >= 0.0");
	}
	twoday = two;
}

double TwoDayPackage::getTwoDay() const {
	return twoday;
}

double TwoDayPackage::calculateCost() const {
	return twoday + (Weight * Cost);
}

string TwoDayPackage::toString() const {
	ostringstream output;

	output << "Name: " << Name
		<< "\nAddress: " << Address << "\n\t" << City << "\n\t" << State << << "\n\t" << Zip
		<< "\nWeight: " << Weight
		<< "\nTotal: " << twoday;
	return output.str();
}