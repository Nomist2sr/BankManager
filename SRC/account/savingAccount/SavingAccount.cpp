#include "SavingAccount.hpp"

// Constructeur
SavingAccount::SavingAccount() : Account() {

}
SavingAccount::SavingAccount(Actor* customer, Actor* adviser, double balance) : Account(customer, adviser, balance) {
	
}
// Destructeur
SavingAccount::~SavingAccount() {
	cout << "SavingAccount destructor" << endl;
	for (Transaction* transaction : this->historicalTransaction)
	{
		delete transaction;
	}
	cout << "Transactions have been deleted" << endl;
}
// Méthode
string SavingAccount::checkInterest() {
	stringstream ss;
	ss << "SavingAccount Interest Bank Data : " << endl;
	return ss.str();
}
// Méthode abstraite implémentée
string SavingAccount::checkBalance() {
	stringstream ss;
	ss << "SavingAccount Bank Data => ";
	ss << "Balance : " << this->balance << endl;
	return ss.str();
}
