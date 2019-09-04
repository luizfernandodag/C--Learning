#include <iostream>
#include<stdexcept>
using namespace std;



class DivideByZero : public runtime_error
{
    public:
       DivideByZero() :
          runtime_error("Divide by zero exception"){}
};

double quotient(double numer, double denom) {
    if (denom == 0) {
        throw DivideByZero();
    }
    else {
        return numer / denom;
    }
}

int main()
{

  double num1,num2,num3;

  cout << "Enter a numerator";
  cin >> num1;
  cout << "Enter a denominator";
  cin >> num2;

  try
  {
    num3 = quotient(num1,num2);
    cout << "result is " << num3;
  }
  catch(...)
  {
    cout << "Exception caught and thrown";
  }
  

    return 0;
}
