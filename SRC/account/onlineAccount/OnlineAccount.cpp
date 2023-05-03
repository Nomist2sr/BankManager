#include "OnlineAccount.hpp"

// Constructeur
OnlineAccount::OnlineAccount() : Account() {

}
OnlineAccount::OnlineAccount(Actor* customer, Actor* adviser, double balance) : Account(customer, adviser, balance) {
	
}
// Destructeur
OnlineAccount::~OnlineAccount() {
	cout << "OnlineAccount destructor" << endl;
	for (Transaction* transaction : this->historicalTransaction)
	{
		delete transaction;
	}
	cout << "Transactions have been deleted" << endl;
}
// Méthode abstraite implémentée
string OnlineAccount::checkBalance() {
	stringstream ss;
	ss << "Online Bank Data => ";
	ss << "Balance : " << this->balance << endl;
	return ss.str();
}
