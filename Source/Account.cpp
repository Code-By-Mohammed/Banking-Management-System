#include "../Include/Account.h"

Account::Account(std::string Name, int AccountNumber, double Balance) 
        : m_strName(Name)
        , m_iAccountNumber(AccountNumber)
{
    m_dBalance = new double(Balance);
    std::cout << "Account created>\nName: " << m_strName << "\nAccount Number: "
              << m_iAccountNumber << "\nBalance: " << *m_dBalance << std::endl;
}

void Account::Deposit(double Amount)
{
    *m_dBalance += Amount;
}

void Account::Withdraw(double Amount)
{
    *m_dBalance -= Amount;
}

void Account::Display() const
{
    std::cout << "Current Balance: " << m_dBalance << std::endl;
}

Account::~Account()
{
    delete m_dBalance;
    std::cout << "All data is deleted" << std::endl;
}
