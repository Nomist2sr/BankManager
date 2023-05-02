#pragma once

#include "../Account.hpp"

class OnlineAccount : public Account {
private:

public:
	// Constructeur
	OnlineAccount();
	OnlineAccount(Actor* customer, Actor* adviser, double balance, vector<Transaction*> historicalTransaction);
	// Destructeur
	~OnlineAccount();
	// M�thode abstraite impl�ment�e
	string checkBalance();

protected:
};