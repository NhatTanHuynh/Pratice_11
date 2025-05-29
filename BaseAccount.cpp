#include "BaseAccount.h"

using namespace std;

BaseAccount::BaseAccount()
{
    balance = 0;
}

void BaseAccount::deposit(double amount) 
{
    balance +=amount;
}

double BaseAccount::getBalance()
{
    return balance;
}

void BaseAccount::monthlyCalc()
{
    double fee = 0.01 * balance + 50;
    balance -= fee;
}