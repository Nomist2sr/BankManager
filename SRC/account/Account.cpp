#include "Account.hpp"

// Constructeur
Account::Account() {

}
Account::Account(Actor* customer, Actor* adviser, double balance, vector<Transaction> historicalTransaction) {
	this->customer = customer;
	this->adviser = adviser;
	this->balance = balance;
	this->historicalTransaction = historicalTransaction;
}

// Destructeur
Account::~Account() {
	// TODO : delete de toutes les transactions
}

// Getter
Actor* Account::getCustomer() const {
	return this->customer;
}
Actor* Account::getAdviser() const {
	return this->adviser;
}
double Account::getBalance() const {
	return this->balance;
}
double Account::getWithdrawal() const {
	return this->withdrawal;
}
double Account::getDeposit() const {
	return this->deposit;
}
string Account::getHistoricalTransaction() {
	stringstream ss;
	ss << "Transaction List : " << endl;
	for (Transaction& transaction : this->historicalTransaction)
	{
		ss << "Date : " << transaction.getDate() << " / Name : " << transaction.getName() << " / Sum : " << transaction.getSum() << endl;
	}
	return ss.str();
}

// Setter
void Account::setCustomer(Actor* const customer) {
	this->customer = customer;
}
void Account::setAdviser(Actor* const adviser) {
	this->adviser = adviser;
}
void Account::setBalance(double const balance) {
	this->balance = balance;
}
void Account::setWithdrawal(double const withdrawal) {
	this->withdrawal = withdrawal;
}
void Account::setDeposit(double const deposit) {
	this->deposit = deposit;
}
void Account::setHistoricalTransaction(vector<Transaction> const historicalTransaction) {
	// TODO : à terminer
}

// Méthode
string Account::checkTransaction() {
	return Account::getHistoricalTransaction();
}
string Account::allWithdrawal() {
	stringstream ss;
	ss << "All withdrawal : " << endl;
	for (Transaction& transaction : this->historicalTransaction)
	{
		if (transaction.getSum() < 0) {
			ss << "Date : " << transaction.getDate() << " / Name : " << transaction.getName() << " / Sum : " << transaction.getSum() << endl;
		}
	}
	return ss.str();
}
string Account::allDeposit() {
	stringstream ss;
	ss << "All deposit : " << endl;
	for (Transaction& transaction : this->historicalTransaction)
	{
		if (transaction.getSum() >= 0) {
			ss << "Date : " << transaction.getDate() << " / Name : " << transaction.getName() << " / Sum : " << transaction.getSum() << endl;
		}
	}
	return ss.str();
}