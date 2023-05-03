#include <string>
#include <iostream>
#include <vector>
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
		ss << "Customer : " << account->getCustomer()->getName() << " / Advisor : " << account->getAdviser()->getName() << " / Balance : " << account->getBalance() << endl;
		ss << account->allDeposit() << endl;
		ss << account->allWithdrawal() << endl;
		ss << account->checkTransaction() << endl;
		ss << account->checkBalance() << endl;
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
	this->customers.erase(customers.end());

}

void Management::deleteAdviser(Actor* adv)			//Suppression d'un conseillé dans le vecteur advisers
{
	this->advisers.erase(advisers.end());

}

void Management::deleteAccount(Account* acc)			//Suppression d'un compte dans le vecteur accounts
{
	this->accounts.erase(accounts.end());

}

void Management::deleteTransaction(Transaction* trans)	//Suppression d'une transaction dans le vecteur transactions
{
	this->transactions.erase(transactions.end());

}






