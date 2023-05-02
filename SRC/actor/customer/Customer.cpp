#include <string>
#include <iostream>
#include "Customer.hpp"

using namespace std;

//Implémentation de la classe customer

Customer::Customer(string name, string firstname, string adress) :Actor(name, firstname, adress) {};

Customer::~Customer() {};

