#include "OnlineAccount.hpp"

// Constructeur
OnlineAccount::OnlineAccount() : Account() {

}
OnlineAccount::OnlineAccount(Actor* customer, Actor* adviser, double balance, vector<Transaction> historicalTransaction) : Account(Actor* customer, Actor* adviser, double balance, vector<Transaction> historicalTransaction) {

}
// Destructeur
OnlineAccount::~OnlineAccount() {
	// TODO : delete de toutes les transactions
}
// M�thode abstraite impl�ment�e
string OnlineAccount::checkBalance() {
	stringstream ss;
	ss << "Online Bank Data : " << endl;
	ss << "Balance : " << this->balance << endl;
	return ss.str();
}
