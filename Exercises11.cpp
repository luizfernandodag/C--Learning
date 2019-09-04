#include <iostream>
#include <sstream>

using namespace std;

class Account{
  protected:
    double balance;
  public:
    Account(double bal)
    {
      balance = bal>0 ? bal:0;
    }

    void credit(double amount)
    {
      balance += amount;
    }

    
   

    double getBalance()
    {
      return balance;
    }

};

class CheckingAccount:public Account{
  private:
  double fee;
  public:
    CheckingAccount(double bal, double f): Account(bal)
    {
      fee = f;
    }

    void debit(double amount)
    {
      if(amount > balance)
      {
        cout << "Insufficient funds." << endl;

      }
      else
      {
        balance = balance - amount - fee;
      }
      
    } 


};
int main()
{

  CheckingAccount myacct(500, .5);
  myacct.credit(100);
  cout << myacct.getBalance();
  myacct.debit(50);
  cout << myacct.getBalance();

  return 0;
}