#pragma once

#include "../Account.hpp"

class SavingAccount : public Account {
private:

public:
	// Constructeur
	SavingAccount();
	SavingAccount(Actor* customer, Actor* adviser, double balance);
	// Destructeur
	~SavingAccount();
	// Méthode
	string checkInterest();
	// Méthode abstraite implémentée
	string checkBalance();

protected:
};