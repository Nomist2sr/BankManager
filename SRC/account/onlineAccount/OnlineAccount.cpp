#include "OnlineAccount.hpp"

// Constructeur
OnlineAccount::OnlineAccount() : Account() {

}
OnlineAccount::OnlineAccount(Actor* customer, Actor* adviser, double balance) : Account(customer, adviser, balance) {
	
}
// Destructeur
OnlineAccount::~OnlineAccount() {
	// TODO : delete de toutes les transactions
}
// Méthode abstraite implémentée
string OnlineAccount::checkBalance() {
	stringstream ss;
	ss << "Online Bank Data => ";
	ss << "Balance : " << this->balance << endl;
	return ss.str();
}
