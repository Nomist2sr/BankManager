#include <string>
#include <iostream>

#include "Advisor.hpp"

using namespace std;

Advisor::Advisor(){}

Advisor::Advisor(string name, string firstname, string adress) : Actor(name, firstname, adress) {}

Advisor::~Advisor() {
	cout << "Advisor destructor" << endl;
};