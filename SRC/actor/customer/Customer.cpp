#include <string>
#include <iostream>
#include "Customer.hpp"

using namespace std;

//Impl�mentation de la classe customer
Customer::Customer() {}

Customer::Customer(string name, string firstname, string adress) :Actor(name, firstname, adress) {};

Customer::~Customer() {
	
};