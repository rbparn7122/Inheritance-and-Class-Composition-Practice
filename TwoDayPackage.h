#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include <string>
#include "Package.h"

class TwoDayPackage : public Package {
public:
	TwoDayPackage(const std::string&, const std::string&,
		const std::string&, const std::string&, const std::string&, double = 0.0, double = 0.0, double = 0.0);
	void setTwoDay(double);
	double getTwoDay() const;

	double calculateCost() const;
	std::string toString() const;
private:
	double twoday;
};

#endif