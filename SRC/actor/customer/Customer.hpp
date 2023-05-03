#pragma once

#include "../Actor.hpp"

using namespace std;

class Customer : public Actor {
private:

public:
	// Constructeur
	Customer();
	Customer(string name, string firstname, string adress);
	// Destructeur
	~Customer();
	// Méthode abstraite implémentée

protected:

};