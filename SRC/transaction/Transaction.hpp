#pragma once

#include <iostream>
#include <sstream>
#include <windows.h>
#include <vector>

#include "./actor/Actor.hpp"
#include "./transaction/Transaction.hpp"

using namespace std;

class Transaction {
private:
	string date;
	string name;
	double sum;

public:
	// Constructeur
	Transaction();
	Transaction(string date, string name, double sum);
	// Destructeur
	~Transaction();
	// Getter
	string getDate() const;
	string getName() const;
	double getSum() const;
	// Setter
	void setDate(string const date);
	void setName(string const name);
	void setSum(double const sum);

protected:

};