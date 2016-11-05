#ifndef PACKAGE_H
#define PACKAGE_H

#include<string>

class Package
{
public:
	Package(const std::string&, const std::string&,
		const std::string&, const std::string&, const std::string&, double = 0.0, double = 0.0);

	void setName(const std::string&); // set name
	std::string getName() const; // return name

	void setAddress(const std::string&); // set address
	std::string getAddress() const; 

	void setCity(const std::string&); // set city
	std::string getCity() const; 

	void setState(const std::string&); // set state
	std::string getState() const; // return state

	void setZip(const std::string&); // set zip
	std::string getZip() const; // return zip

	void setWeight(double); // set gross sales amount
	double getWeight() const; // return gross sales amount

	void setCost(double); // set commission rate (percentage)
	double getCost() const; // return commission rate

	double calculateCost() const; // calculate shipping cost
	std::string toString() const; // create string representation

protected:
	std::string Name;
	std::string Address;
	std::string City;
	std::string State;
	std::string Zip;
	double Weight; // package weight
	double Cost; // Cost per ounce
};

#endif