#include <iostream>
#include <conio.h>
using namespace std;

// Function for checking the pin number //
PinCheck(int Pin)
{
    int UserPin;
    cout << "Enter you card pin number" << endl;
    cin >> UserPin;
    if (UserPin == Pin)
    {
        return true;
    }
    else
    {
        return false;
    }
}


// Function for deducting money from account  //
     double BalanceAfterDeduction(double AccountBalance, double transectionBalance){
      double AfterTransection;
      AfterTransection= AccountBalance-transectionBalance;

      return AfterTransection;
     }


// Function for Savings account//
void Transection(double TotleBalance,double WithdrawBalance)
{
    cout << "Your Account balance is: " << TotleBalance << " Dollers" << endl;
    if (TotleBalance >= WithdrawBalance)
    {
        cout << "Transection Successfull" << endl;
        cout << "Your Balance after transection is :" << BalanceAfterDeduction(TotleBalance, WithdrawBalance )<< " Dollers" << endl;
    }
    else
    {
        cout << "Insufficient Balance" << endl;
    }
}



 /// Main body ///
 int main()
{
    int Pin = 454545;
    if (PinCheck(Pin) == true)
    {
        int AccountOption;
        double TransactionBalance;
        cout << "For savings account, Enter 1" << endl;
        cout << "For current account, Enter 2" << endl;
        cin >> AccountOption;
        if (AccountOption == 1)
        {
        
        double Avalible_Balance = 350.65;
        cout << "Enter the amount you want to withdraw" << endl;
        cin>>TransactionBalance;
            Transection(Avalible_Balance,TransactionBalance);
        }
        else if (AccountOption == 2)
        {
            double Avalible_Balance = 200.25;
        cout << "Enter the amount you want to withdraw" << endl;
        cin>>TransactionBalance;
            Transection(Avalible_Balance,TransactionBalance);
        }
    }
    else
    {
        cout << "You have Entered invaild pin number" << endl;
    }

   getch();
    return 0;

}