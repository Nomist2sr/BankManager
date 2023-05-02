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
Management::Management(Actor* person, Account* account, Transaction* transaction) {

	this->person = person;
	this->account = account;
	this->transaction = transaction;

}

//Implémentation Destructeur
Management::~Management() {};



//Implémentation  getter
Actor* Management::getPerson() const
{
	return this->person;

}

Account* Management::getAccount() const
{
	return this->account;

}

Transaction* Management::getTransaction() const
{
	return this->transaction;

}

//Implémentation  setter
void Management::setPerson(Actor* const person)
{
	this->person = person;
}

void Management::setAccount(Account* const account)
{
	this->account = account;
}

void Management::setTransaction(Transaction* const transaction)
{
	this->transaction = transaction;
}


//Méthodes 


void Management::addCustomer(Customer* cust)			//Ajout d'un client dans le vecteur customers
{
	this->customers.push_back(cust);

}

void Management::addAdviser(Advisor* adv)				//Ajout d'un conseillé dans le vecteur advisers
{
	this->advisers.push_back(adv);

}

void Management::addAccount(Account* acc)				//Ajout d'un compte dans le vecteur accounts
{
	this->accounts.push_back(adv);

}

void Management::addTransaction(Transaction* trans)		//Ajout d'une transaction dans le vecteur transactions
{
	this->transactions.push_back(trans);

}

void Management::deleteCustomer(Customer* cust)			//Suppression d'un client dans le vecteur customers
{
	this->customers.erase(customers.end());

}

void Management::deleteAdviser(Advisor* adv)			//Suppression d'un conseillé dans le vecteur advisers
{
{
	this->advisers.erase(advisers.end());

}

void Management::deleteAccount(Account* acc)			//Suppression d'un compte dans le vecteur accounts
{
	this->accounts.erase(accounts.end());

}

void Management::deleteTransaction(Transaction* trans)	//Suppression d'une transaction dans le vecteur transactions
{
{
	this->transactions.erase(transactions.end());

}






