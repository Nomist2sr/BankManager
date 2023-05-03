#include "SavingAccount.hpp"

// Constructeur
SavingAccount::SavingAccount() : Account() {

}
SavingAccount::SavingAccount(Actor* customer, Actor* adviser, double balance, vector<Transaction*> historicalTransaction) {
	this->customer = customer;
	this->adviser = adviser;
	this->balance = balance;
	this->historicalTransaction = historicalTransaction;
}
// Destructeur
SavingAccount::~SavingAccount() {
	// TODO : delete de toutes les transactions
}
// Méthode
string SavingAccount::checkInterest() {
	// TODO : à terminer
}
// Méthode abstraite implémentée
string SavingAccount::checkBalance() {
	stringstream ss;
	ss << "SavingAccount Bank Data : " << endl;
	ss << "Balance : " << this->balance << endl;
	return ss.str();
}
