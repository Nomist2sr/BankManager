#pragma once

#include <iostream>
#include <sstream>
#include <vector>

#include "../actor/Actor.hpp"
#include "../transaction/Transaction.hpp"

using namespace std;

class Account {
private:

public:
	// Constructeur
	Account();
	Account(Actor* customer, Actor* adviser, double balance);
	// Destructeur
	virtual ~Account();
	// Getter
	Actor* getCustomer() const;
	Actor* getAdviser() const;
	double getBalance() const;
	double getWithdrawal() const;
	double getDeposit() const;
	string getHistoricalTransaction();
	vector<Transaction*> getHistoricalTransactionbis();
	// Setter
	void setCustomer(Actor* const customer);
	void setAdviser(Actor* const adviser);
	void setBalance(double const balance);
	void setWithdrawal(double const withdrawal);
	void setDeposit(double const deposit);
	void setHistoricalTransaction(Transaction* transaction);
	// Méthode
	string checkTransaction();
	string allWithdrawal();
	string allDeposit();
	void deleteLastOperation();
	// Méthode abstraite
	virtual string checkBalance() = 0;
	
protected:
	Actor* customer;
	Actor* adviser;
	double balance;
	double withdrawal;
	double deposit;
	vector<Transaction*> historicalTransaction;
};