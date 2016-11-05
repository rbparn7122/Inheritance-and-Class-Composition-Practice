#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include <string>
#include "Package.h"

class OvernightPackage : public Package {
public:
	OvernightPackage(const std::string&, const std::string&,
		const std::string&, const std::string&, const std::string&, double = 0.0, double = 0.0, double = 0.0);
	void setOvernight(double);
	double getOvernight() const;

	double calculateCost() const;
	std::string toString() const;
private:
	double overnight;
};

#endif