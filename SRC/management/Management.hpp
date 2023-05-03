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

//Attributs priv�s aucun n'acc�s en dehors de la classe
private:
	//Attributs et vector
	Actor* person;
	Account* account;
	Transaction* transaction;
	vector<Customer*>customers;       // vector qui pointe vers l'objet Customer et stock les clients
	vector<Advisor*>advisers;		  // vector qui pointe vers l'objet Advisor et stock les conseill�s
	vector<Account*>accounts;		  // vector qui pointe vers l'objet Account et stock les comptes
	vector<Transaction*>transactions; // vector qui pointe vers l'objet Transaction et stock les transactions
	

//Acc�s � l'ext�rieur de la classe
public:

	//Constructeur
	Management();  //Initialisation du constructeur par d�faut
	Management(Actor* person, Account* account, Transaction* transaction);  //Initialisation du constructeur avec les param�tres

	//destructeur
	~Management();

	//Getter
	Actor* getPerson() const;
	Account* getAccount() const;
	Transaction* getTransaction() const;

	//Setter
	void setPerson(Actor* const person);
	void setAccount(Account* const account);
	void setTransaction(Transaction* const transaction);


protected:

	//M�thodes prototypage
	void addCustomer(Customer* cust);  
	void addAdviser(Advisor* adv);
	void addAccount(Account* acc);
	void addTransaction(Transaction* trans);
	void deleteCustomer(Customer* cust);
	void deleteAdviser(Advisor* adv);
	void deleteAccount(Account* acc);
	void deleteTransaction(Transaction* trans);


};