#ifndef BASEACCOUNT_H
#define BASEACCOUNT_H

using namespace std;

class BaseAccount {
private:
    double balance;
public:
    BaseAccount();
    void deposit (double amount);
    double getBalance();
    virtual void monthlyCalc();
};


#endif