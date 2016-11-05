#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "Package.h"
using namespace std;

// constructor                                                        
Package::EndPoint(const string& name,
	const string &address, const string &city, const string &state, const string &zip, double weight, double cost) {
	Name = name; // should validate                              
	Address = address;
	City = city;
	State = state;
	Zip = zip;
	setWeight(weight); // validate and store package weight           
	setCost(cost); // validate and package cost
}

// set name
void Package::setName(const string& name) {
	Name = name; // should validate
}

// return name
string Package::getName() const { return Name; }

void Package::setAddress(const string& address) {
	Address = address; // should validate
}

string Package::getAddress() const { return Address; }

void Package::setCity(const string& city) {
	City = city; // should validate
}


string Package::getCity() const { return City; }

void Package::setState(const string& state) {
	State = state; // should validate
}


string Package::getState() const { return State; }

void Package::setZip(const string& zip) {
	Zip = zip; // should validate
}


string Package::getZip() const { return Zip; }

// set gross weight
void Package::setWeight(double weight) {
	if (weight < 0.0) {
		throw invalid_argument("Weight must be >= 0.0");
	}

	Weight = weight;
}


double Package::getWeight() const { return Weight; }

// set cost
void Package::setCost(double cost) {
	if (cost <= 0.0) {
		throw invalid_argument("Cost must be > 0.0 ");
	}

	Cost = cost;
}

// return cost
double Package::getCost() const {
	return Cost;
}

// calculate earnings                        
double Package::calculateCost() const {
	return Weight * Cost;
}

// return string representation of CommissionEmployee object        
string Package::toString() const {
	ostringstream output;
	output << fixed << setprecision(2); // two digits of precision   
	output << "Name: " << Name
		<< "\nAddress: " << Address << "\n\t" << City << "\n\t" << State << << "\n\t" << Zip
		<< "\nWeight: " << Weight
		<< "\nTotal: " << Cost;
	return output.str();
}
