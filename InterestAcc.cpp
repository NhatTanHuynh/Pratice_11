#include "InterestAcc.h";

InterestAcc::InterestAcc()
{
    balance = 0;
    rate = 0.05;
}

InterestAcc::InterestAcc(double pRate)
{
    balance = 0;
    rate = pRate;
}

void InterestAcc::monthlyCalc()
{
    balance += balance * rate;
    double fee = 0.02 * balance + 50;
    balance -= fee;
}