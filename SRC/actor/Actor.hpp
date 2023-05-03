#pragma once

#include <iostream>
#include <sstream>

using namespace std;

class Actor {
private:

public:
	// Constructeur
	Actor();
	Actor(string name, string firstname, string adress);
	// Destructeur
	~Actor();
	// Getter
	string getName() const;
	string getFirstname() const;
	string getAdress() const;
	// Setter
	void setName(string const name);
	void setFirstname(string const firstname);
	void setAdress(string const adress);
	// Méthode
	string displayInformation();
protected:
	string name;
	string firstname;
	string adress;
};