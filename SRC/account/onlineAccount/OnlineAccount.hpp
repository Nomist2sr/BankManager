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
	// Méthode abstraite implémentée
	string checkBalance();

protected:
};