#include <string>
#include <iostream>
#include "Main.hpp"

int main(void) {
    
    // Création d'un client
    Actor* customer = new Customer("DOE", "John", "MyAdress");
    // Création d'un conseiller
    Actor* advisor = new Advisor("FREEZE", "Mister", "IceBank");
    // Création de compte
    Account* onlineAccount = new OnlineAccount(customer, advisor, 0);
    Account* savingAccount = new SavingAccount(customer, advisor, 0);
    // Création d'une gestion de compte
    Management* management = new Management(customer, advisor);
    management->addAccount(onlineAccount);
    management->addAccount(savingAccount);
    management->addTransaction(onlineAccount, new Transaction("02/05/23", "Deposit", 100));
    management->addTransaction(onlineAccount, new Transaction("02/05/23", "Deposit", 500));
    management->addTransaction(onlineAccount, new Transaction("02/05/23", "Withdrawal", -200));
    management->addTransaction(savingAccount, new Transaction("03/05/23", "Withdrawal", -50));
    // Affichage de la liste des comptes
    cout << management->getAccounts() << endl;
    // Affichage des informations pour un compte
    cout << management->getAllDeposit(onlineAccount) << endl;
    cout << management->getAllWithdrawal(onlineAccount) << endl;
    cout << management->getCheckBalance(onlineAccount) << endl;
    cout << management->getCheckTransaction(onlineAccount) << endl;
    // Suppression d'un compte et de ses transactions
    delete onlineAccount;

    return (0);
}