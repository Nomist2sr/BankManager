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
// M�thode
string SavingAccount::checkInterest() {
	// TODO : � terminer
}
// M�thode abstraite impl�ment�e
string SavingAccount::checkBalance() {
	stringstream ss;
	ss << "SavingAccount Bank Data : " << endl;
	ss << "Balance : " << this->balance << endl;
	return ss.str();
}
