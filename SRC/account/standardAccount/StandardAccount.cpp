#include "StandardAccount.hpp"

// Constructeur
StandardAccount::StandardAccount() : Account() {

}
StandardAccount::StandardAccount(Actor* customer, Actor* adviser, double balance, vector<Transaction> historicalTransaction) : Account(Actor* customer, Actor* adviser, double balance, vector<Transaction> historicalTransaction) {

}
// Destructeur
StandardAccount::~StandardAccount() {
	// TODO : delete de toutes les transactions
}
// Méthode

// Méthode abstraite implémentée
string StandardAccount::checkBalance() {
	stringstream ss;
	ss << "StandardAccount Bank Data : " << endl;
	ss << "Balance : " << this->balance << endl;
	return ss.str();
}
