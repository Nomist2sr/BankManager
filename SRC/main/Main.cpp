#include "Main.hpp"

int main(void) {
    
    vector<Transaction*> transactions;
    // Création d'un client et d'un conseiller
    Actor* customer = new Customer("DE SOUSA PEIXEIRA", "Joachim", "Boulevard du Petit Port");
    Actor* advisor = new Advisor("CONSEIL", "Pierre", "Boulevard de la bourse");
    // Création d'un compte
    Account* onlineAccount = new OnlineAccount(customer, advisor, 0, transactions);
    // Création d'une opération
    onlineAccount->setHistoricalTransaction(new Transaction("02/05/23", "Deposit", 100));
    onlineAccount->setHistoricalTransaction(new Transaction("02/05/23", "Withdrawal", -200));

    // Affichage des informations
    cout << customer->displayInformation();
    cout << advisor->displayInformation();
    cout << onlineAccount->allDeposit();
    cout << onlineAccount->allWithdrawal();
    cout << onlineAccount->checkTransaction();

    return (0);
}