#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "OvernightPackage.h"

using namespace std;


OvernightPackage::OvernightPackage(const string& name,
	const string &address, const string &city, const string &state, const string &zip, double weight, double cost, double overnight)
	
	: Package(name, address, city, state, zip, weight, cost){
	setOvernight(over);
}

void OvernightPackage::setOvernight(double over) {
	if (over < 0.0) {
		throw invalid_argument("Overnight Shipping must be >= 0.0");
	}
	overnight = over;
}

double OvernightPackage::getOvernight() const {
	return overnight;
}

double OvernightPackage::calculateCost() const {
	return overnight + (Weight * Cost);
}

string OvernightPackage::toString() const {
	ostringstream output;
  
	output << "Name: " << Name
		<< "\nAddress: " << Address << "\n\t" << City << "\n\t" << State << << "\n\t" << Zip
		<< "\nWeight: " << Weight
		<< "\nTotal: " << overnight;
	return output.str();
}