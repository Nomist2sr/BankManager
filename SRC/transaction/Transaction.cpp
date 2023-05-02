#include "Transaction.hpp"

// Constructeur
Transaction::Transaction() {

}
Transaction::Transaction(string date, string name, double sum) {
	this->date = date;
	this->name = name;
	this->sum = sum;
}
// Destructeur
Transaction::~Transaction() {

}
// Getter
string Transaction::getDate() const {
	return this->date;
}
string Transaction::getName() const {
	return this->name;
}
double Transaction::getSum() const {
	return this->sum;
}
// Setter
void Transaction::setDate(string const date) {
	this->date = date;
}
void Transaction::setName(string const name) {
	this->name = name;
}
void Transaction::setSum(double const sum) {
	this->sum = sum;
}