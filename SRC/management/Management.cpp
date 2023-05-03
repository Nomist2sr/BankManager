#include <string>
#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include "Management.hpp"
#include "../actor/Actor.hpp"
#include "../account/Account.hpp"
#include "../transaction/Transaction.hpp"

using namespace std;

//Implémentation de la classe Management

//Implémentation constructeur par defaut

Management::Management()
{


}

//Implémentation constructeur avec les paramétres
Management::Management(Actor* customer, Actor* adviser) {

	this->customer = customer;
	this->advisor = advisor;
	vector<Account*>accounts;
}

//Implémentation Destructeur
Management::~Management() {};



//Implémentation  getter
Actor* Management::getCustomer() const
{
	return this->customer;

}

Actor* Management::getAdvisor() const
{
	return this->advisor;

}

Account* Management::getAccount() const
{
	return this->account;
}

Transaction* Management::getTransaction() const
{
	return this->transaction;

}

string Management::getAccounts() const
{
	stringstream ss;
	ss << "Account List : " << endl;
	for (Account* account : this->accounts)
	{
		ss << account->checkBalance();

	}
	return ss.str();
}
//Implémentation  setter
/*
void Management::setPerson(Actor* const person)
{
	this->person = person;
}
*/
void Management::setAccount(Account* const account)
{
	this->account = account;
}

void Management::setTransaction(Transaction* const transaction)
{
	this->transaction = transaction;
}


//Méthodes 


void Management::addCustomer(Actor* cust)			//Ajout d'un client dans le vecteur customers
{
	this->customers.push_back(cust);

}

void Management::addAdviser(Actor* adv)				//Ajout d'un conseillé dans le vecteur advisers
{
	this->advisers.push_back(adv);

}

void Management::addAccount(Account* acc)				//Ajout d'un compte dans le vecteur accounts
{
	this->accounts.push_back(acc);

}

void Management::addTransaction(Account* account, Transaction* trans)		//Ajout d'une transaction dans le vecteur transactions
{
	account->setHistoricalTransaction(trans);
}

void Management::deleteCustomer(Actor* cust)			//Suppression d'un client dans le vecteur customers
{
	for (Account* account : this->accounts) {
		this->accounts.erase(remove(accounts.begin(), accounts.end(), account), accounts.end());
		delete account;
	}
	delete cust;
}

void Management::deleteAdviser(Actor* adv)			//Suppression d'un conseillé dans le vecteur advisers
{
	this->advisers.erase(advisers.end());

}

void Management::deleteAccount(Account* acc)			//Suppression d'un compte dans le vecteur accounts
{
	this->accounts.erase(std::remove(accounts.begin(), accounts.end(), acc), accounts.end());
	delete acc;
}

void Management::deleteTransaction(Account* account)	//Suppression d'une transaction dans le vecteur transactions
{
	account->deleteLastOperation();
}

string Management::getAllDeposit(Account* account) {

	return account->allDeposit();
}

string Management::getAllWithdrawal(Account* account) {

	return account->allWithdrawal();
}

string Management::getCheckBalance(Account* account) {

	return account->checkBalance();
}

string Management::getCheckTransaction(Account* account) {
	
	return account->checkTransaction();
}





