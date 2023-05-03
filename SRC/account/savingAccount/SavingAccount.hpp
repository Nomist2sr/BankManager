#pragma once

#include "../Account.hpp"

class SavingAccount : public Account {
private:

public:
	// Constructeur
	SavingAccount();
	SavingAccount(Actor* customer, Actor* adviser, double balance, vector<Transaction*> historicalTransaction);
	// Destructeur
	~SavingAccount();
	// M�thode
	string checkInterest();
	// M�thode abstraite impl�ment�e
	string checkBalance();

protected:
};