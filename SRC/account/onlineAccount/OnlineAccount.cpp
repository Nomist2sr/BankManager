#include "OnlineAccount.hpp"

// Constructeur
OnlineAccount::OnlineAccount() : Account() {

}
OnlineAccount::OnlineAccount(Actor* customer, Actor* adviser, double balance, vector<Transaction*> historicalTransaction) {
	this->customer = customer;
	this->adviser = adviser;
	this->balance = balance;
	this->historicalTransaction = historicalTransaction;
}
// Destructeur
OnlineAccount::~OnlineAccount() {
	// TODO : delete de toutes les transactions
}
// Méthode abstraite implémentée
string OnlineAccount::checkBalance() {
	stringstream ss;
	ss << "Online Bank Data : " << endl;
	ss << "Balance : " << this->balance << endl;
	return ss.str();
}
