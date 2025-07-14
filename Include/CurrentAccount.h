#pragma once
#include "Account.h"
class CurrentAccount : public Account
{
    public:
        CurrentAccount(std::string Name, int AccountNumber, double Balance);
        void calculateInterest();
        void Display() const override;
        ~CurrentAccount();
};