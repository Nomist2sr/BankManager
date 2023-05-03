#include <string>
#include <iostream>
#include "Main.hpp"

int main(void) {
    
    // Cr�ation d'un client
    Actor* customer = new Customer("John", "Doe", "MyAdress");
    // Cr�ation d'un conseiller
    Actor* advisor = new Advisor("Mister", "Freeze", "IceBank");
    // Cr�ation d'un compte
    Account* onlineAccount = new OnlineAccount(customer, advisor, 0);
    // Cr�ation d'une gestion de compte
    Management* management = new Management(customer, advisor);
    management->addAccount(onlineAccount);
    management->addTransaction(onlineAccount, new Transaction("02/05/23", "Deposit", 100));
    management->addTransaction(onlineAccount, new Transaction("02/05/23", "Withdrawal", -200));
    cout << management->getAccounts();

    return (0);
}