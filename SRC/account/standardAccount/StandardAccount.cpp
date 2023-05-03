#include "StandardAccount.hpp"

// Constructeur
StandardAccount::StandardAccount() : Account() {

}
StandardAccount::StandardAccount(Actor* customer, Actor* adviser, double balance) : Account(customer, adviser, balance) {
	
}
// Destructeur
StandardAccount::~StandardAccount() {
	cout << "StandardAccount destructor" << endl;
	for (Transaction* transaction : this->historicalTransaction)
	{
		delete transaction;
	}
	cout << "Transactions have been deleted" << endl;
}
// Méthode

// Méthode abstraite implémentée
string StandardAccount::checkBalance() {
	stringstream ss;
	ss << "StandardAccount Bank Data => ";
	ss << "Balance : " << this->balance << endl;
	return ss.str();
}
