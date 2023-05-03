#include <iostream>
#include <string>
#include <vector>

#include "../actor/advisor/Advisor.hpp"
#include "../actor/customer/Customer.hpp"
#include "../account/onlineAccount/OnlineAccount.hpp"
#include "../account/savingAccount/SavingAccount.hpp"
#include "../account/standardAccount/StandardAccount.hpp"
#include "../transaction/Transaction.hpp"


//Namespace std
using namespace std;


class Management {

//Attributs privés aucun n'accès en dehors de la classe
private:
	//Attributs et vector
	Actor* customer;
	Actor* advisor;
	Account* account;
	Transaction* transaction;
	vector<Actor*>customers;       // vector qui pointe vers l'objet Customer et stock les clients
	vector<Actor*>advisers;		  // vector qui pointe vers l'objet Advisor et stock les conseillés
	vector<Account*>accounts;		  // vector qui pointe vers l'objet Account et stock les comptes
	vector<Transaction*>transactions; // vector qui pointe vers l'objet Transaction et stock les transactions
	

//Accès à l'extérieur de la classe
public:

	//Constructeur
	Management();  //Initialisation du constructeur par défaut
	Management(Actor* customer, Actor* adviser);  //Initialisation du constructeur avec les paramétres

	//destructeur
	~Management();

	//Getter
	Actor* getCustomer() const;
	Actor* getAdvisor() const;
	Account* getAccount() const;
	Transaction* getTransaction() const;
	string getAccounts() const;

	//Setter
	//void setPerson(Actor* const person);
	void setAccount(Account* const account);
	void setTransaction(Transaction* const transaction);

	//Méthodes prototypage
	void addCustomer(Actor* cust);
	void addAdviser(Actor* adv);
	void addAccount(Account* acc);
	void addTransaction(Account* account, Transaction* trans);
	void deleteCustomer(Actor* cust);
	void deleteAdviser(Actor* adv);
	void deleteAccount(Account* acc);
	void deleteTransaction(Transaction* trans);

protected:

};