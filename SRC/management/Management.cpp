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

mutex mute;

//Implémentation de la classe Management

//Implémentation constructeur par defaut

Management::Management()
{

}

//Implémentation constructeur avec les paramétres
Management::Management(Actor* customer, Actor* advisor) {

	this->customer = customer;
	this->advisor = advisor;
}

//Implémentation Destructeur
Management::~Management() {
	cout << "Management destructor" << endl;
};



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

void Management::setCustomer(Actor* customer)
{
	this->customer = customer;
}

void Management::setAdvisor(Actor* advisor)
{
	this->advisor = advisor;
}

void Management::setAccount(Account* const account)
{
	this->account = account;
}


//Méthodes

void Management::addCustomer(Actor* cust)
{
	this->customer = cust;
}

void Management::addAdvisor(Actor* adv)
{
	this->advisor = adv;
}

void Management::addAccount(Account* acc)
{
	this->accounts.push_back(acc);
}

void Management::addTransaction(Account* account, Transaction* trans)
{
	account->setHistoricalTransaction(trans);
}

void Management::deleteCustomer()
{
	for (Account* account : this->accounts) {
		delete account;
		this->accounts.erase(remove(accounts.begin(), accounts.end(), account), accounts.end());
	}
	delete this->customer;
	this->customer = nullptr;
}

void Management::deleteAdvisor()
{
	delete this->advisor;
	this->advisor = nullptr;
}

void Management::deleteAccount(Account* acc)
{
	delete acc;
	this->accounts.erase(std::remove(accounts.begin(), accounts.end(), acc), accounts.end());
}

void Management::deleteTransaction(Account* account)
{
	account->deleteLastOperation();
}

void Management::addTransactionWithThread(Account* account)
{
	//account->getHistoricalTransactionbis().push_back(trans);
	mute.lock();
	cout << "Thread" << endl;
	account->setHistoricalTransaction(new Transaction("02/05/23", "Deposit", 50));
	this_thread::sleep_for(chrono::seconds(2));
	mute.unlock();
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





