#pragma once

#include "../Account.hpp"

class StandardAccount : public Account {
private:

public:
	// Constructeur
	StandardAccount();
	StandardAccount(Actor* customer, Actor* adviser, double balance);
	// Destructeur
	~StandardAccount();
	// M�thode

	// M�thode abstraite impl�ment�e
	string checkBalance();

protected:
};