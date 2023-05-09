#include <string>
#include <iostream>
#include <future>

#include "Main.hpp"

std::mutex mut;
int cpt = 0;

void addTransactionWithThread(Account* account, int sleep, int *valide)
{
    while (*valide == 0) {
        mut.lock();
        cpt++;
        account->setHistoricalTransaction(new Transaction("02/05/23", "Deposit", 50));
        mut.unlock();
        this_thread::sleep_for(chrono::seconds(sleep));
    }
}

int main(void) {

    int valide(0);

    // Création d'un client
    Actor* customer = new Customer("DOE", "John", "MyAdress");
    // Création d'un conseiller
    Actor* advisor = new Advisor("FREEZE", "Mister", "IceBank");
    // Création de compte
    Account* onlineAccount = new OnlineAccount(customer, advisor, 250);
    Account* savingAccount = new SavingAccount(customer, advisor, 2000);
    Account* standardAccount = new StandardAccount(customer, advisor, 400);
    // Création d'une gestion de compte
    Management* management = new Management(customer, advisor);
    management->addAccount(onlineAccount);
    management->addAccount(savingAccount);
    management->addAccount(standardAccount);
    // Ajout de transaction
    management->addTransaction(onlineAccount, new Transaction("02/05/23", "Deposit", 50));
    management->addTransaction(onlineAccount, new Transaction("03/05/23", "Withdrawal", -150));
    management->addTransaction(savingAccount, new Transaction("02/05/23", "Deposit", 200));
    management->addTransaction(savingAccount, new Transaction("03/05/23", "Withdrawal", -50));
    management->addTransaction(standardAccount, new Transaction("02/05/23", "Deposit", 100));
    management->addTransaction(standardAccount, new Transaction("03/05/23", "Withdrawal", -250));
    // Ajout transaction récurrente
    thread th1(addTransactionWithThread, onlineAccount, 1, &valide);
    thread th2(addTransactionWithThread, savingAccount, 1, &valide);
    // Affichage des informations du client
    cout << management->getCustomer()->displayInformation();
    // Affichage de la liste des comptes
    cout << management->getAccounts() << endl;
    // On stoppe la récurrence
    while (valide == 0) {
        cout << "Stop rec" << endl;
        cin >> valide;
    }
    th1.join();
    th2.join();
    // Affichage des informations pour un compte
    cout << management->getAllDeposit(onlineAccount) << endl;
    cout << management->getAllWithdrawal(onlineAccount) << endl;
    cout << management->getCheckBalance(onlineAccount) << endl;
    cout << management->getCheckTransaction(onlineAccount) << endl;

    // Suppression d'un compte et de ses transactions
    // management->deleteAccount(onlineAccount);
    // Affichage de la liste des comptes
    cout << management->getAccounts() << endl;
    // Suppresion d'un utilisateur, de ses comptes et des transactions associées
    management->deleteCustomer();
    // Suppression du conseiller et du management
    delete advisor;
    delete management;

    // Fin du programme
    cout << "End of program" << endl;

    return (0);
}