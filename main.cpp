#include "Include/Account.h"
#include "Include/SavingAccount.h"
#include "Include/CurrentAccount.h"
#include <cstdlib>
bool Authenticate()
{
    bool Access = false;
    std::string User, Pass;
    std::cout << "Welcome to Banking system\nPlease Enter Credentials:\nUser: ";
    std::cin >> User;
    std::cout << "Password: ";
    std::cin >> Pass;
    if (User == "Admin" && Pass == "Admin")
    {
        Access = true;
    }
    return Access;
}
void CreateAccout()
{
    std::string strName;
    int AccountNumber;
    double Balance;
    std::cout << "Enter the Name" << std::endl;
    std::cin.ignore();
    std::getline(std::cin, strName);
    std::cout << "Enter the Account Number" << std::endl;
    std::cin >> AccountNumber;
    std::cout << "Enter the Balance" << std::endl;
    std::cin >> Balance;
    Account* Create = new SavingAccount(strName, AccountNumber, Balance); 
}
int main()
{
    bool IsUserAuthenticated = Authenticate();
    if (IsUserAuthenticated)
    {
        std::cout << "Access Granted " << std::endl;
        CreateAccout();
    }
    else
    {
        std::cout << "Access Denied" << std::endl;
    }
    return 0;
}