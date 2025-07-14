#pragma once
#include "Account.h"
class SavingAccount : public Account
{
    public:
        SavingAccount(std::string Name, int AccountNumber, double Balance);
        void chargeFee();
        void Display() const override;
        ~SavingAccount();
};