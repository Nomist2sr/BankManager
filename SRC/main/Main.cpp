#include <string>
#include <iostream>
#include <memory>

#include "Main.hpp"

int main(void) {
    
    // Création d'un client
    unique_ptr<Actor> customer = make_unique<Customer>("DOE", "John", "MyAdress");
    unique_ptr<Actor> advisor = make_unique<Advisor>("FREEZE", "Mister", "IceBank");
    // Création de compte
    unique_ptr<Account> onlineAccount = make_unique<OnlineAccount>(customer.get(), advisor.get(), 3000);
    unique_ptr<Account> savingAccount = make_unique<SavingAccount>(customer.get(), advisor.get(), 2000);
    unique_ptr<Account> standardAccount = make_unique<StandardAccount>(customer.get(), advisor.get(), 400);
    // Création d'une gestion de compte
    unique_ptr<Management> management = make_unique<Management>(customer.get(), advisor.get());
    management->addAccount(onlineAccount.get());
    management->addAccount(savingAccount.get());
    management->addAccount(standardAccount.get());
    // Ajout de transaction
    unique_ptr<Transaction> transaction = make_unique<Transaction>("02/05/23", "Deposit", 50);
    management->addTransaction(onlineAccount.get(), transaction.get());
    cout << management->getCheckTransaction(onlineAccount.get()) << endl;
    /*
    management->addTransaction(onlineAccount, new Transaction("03/05/23", "Withdrawal", -150));
    management->addTransaction(savingAccount, new Transaction("02/05/23", "Deposit", 200));
    management->addTransaction(savingAccount, new Transaction("03/05/23", "Withdrawal", -50));
    management->addTransaction(standardAccount, new Transaction("02/05/23", "Deposit", 100));
    management->addTransaction(standardAccount, new Transaction("03/05/23", "Withdrawal", -250));
    // Affichage des informations du client
    cout << management->getCustomer()->displayInformation();
    // Affichage de la liste des comptes
    cout << management->getAccounts() << endl;
    // Affichage des informations pour un compte
    cout << management->getAllDeposit(onlineAccount) << endl;
    cout << management->getAllWithdrawal(onlineAccount) << endl;
    cout << management->getCheckBalance(onlineAccount) << endl;
    cout << management->getCheckTransaction(onlineAccount) << endl;
    // Suppression d'un compte et de ses transactions
    management->deleteAccount(onlineAccount);
    // Affichage de la liste des comptes
    cout << management->getAccounts() << endl;
    // Suppresion d'un utilisateur, de ses comptes et des transactions associées
    management->deleteCustomer(customer);
    // Suppression du conseiller et du management
    delete advisor;
    delete management;
    */
    // Fin du programme
    cout << "End of program" << endl;
    
    return (0);
}