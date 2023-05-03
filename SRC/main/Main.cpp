#include <string>
#include <iostream>
#include "Main.hpp"

int main(void) {
    
    // Création d'un client
    Actor* customer = new Customer("John", "Doe", "MyAdress");
    // Création d'un conseiller
    Actor* advisor = new Advisor("Mister", "Freeze", "IceBank");
    // Création d'un compte
    Account* onlineAccount = new OnlineAccount(customer, advisor, 0);
    // Création d'une gestion de compte
    Management* management = new Management(customer, advisor);
    management->addAccount(onlineAccount);
    management->addTransaction(onlineAccount, new Transaction("02/05/23", "Deposit", 100));
    management->addTransaction(onlineAccount, new Transaction("02/05/23", "Withdrawal", -200));
    cout << management->getAccounts();

    return (0);
}