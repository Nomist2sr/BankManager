#include <iostream>
#include <string>
#include <vector>
#include <thread>
#include <mutex>
#include <chrono>

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
	Actor* customer;
	Actor* advisor;
	Account* account;
	vector<Account*>accounts;		  // vector qui pointe vers l'objet Account et stock les comptes

//Acc�s � l'ext�rieur de la classe
public:

	//Constructeur
	Management();  //Initialisation du constructeur par d�faut
	Management(Actor* customer, Actor* advisor);  //Initialisation du constructeur avec les param�tres

	//destructeur
	~Management();

	//Getter
	Actor* getCustomer() const;
	Actor* getAdvisor() const;
	Account* getAccount() const;
	string getAccounts() const;

	//Setter
	void setCustomer(Actor* const customer);
	void setAdvisor(Actor* const advisor);
	void setAccount(Account* const account);

	//M�thodes prototypage
	void addCustomer(Actor* cust);
	void addAdvisor(Actor* adv);
	void addAccount(Account* acc);
	void addTransaction(Account* account, Transaction* trans);
	void deleteCustomer();
	void deleteAdvisor();
	void deleteAccount(Account* acc);
	void deleteTransaction(Account* account);
	void addTransactionWithThread(Account* account);

	string getAllDeposit(Account* account);
	string getAllWithdrawal(Account* account);
	string getCheckBalance(Account* account);
	string getCheckTransaction(Account* account);

protected:

};