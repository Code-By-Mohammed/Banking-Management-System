#pragma once
// Author: Mohammed Sadiq
#include <iostream>
class Account
{
    private:
        std::string m_strName;
        int m_iAccountNumber;
        double* m_dBalance;
    public:
        Account(std::string Name, int AccountNumber, double Balance);
        virtual void Deposit(double Amount);
        virtual void Withdraw(double Amount);
        virtual void Display() const;
        virtual ~Account();
};