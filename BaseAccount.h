#ifndef BASEACCOUNT_H
#define BASEACCOUNT_H

using namespace std;

class BaseAccount {
public:
    double balance;
    BaseAccount();
    void deposit (double amount);
    double getBalance();
    virtual void monthlyCalc();
};


#endif