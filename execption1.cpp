#include <iostream>

using namespace std;
const int DividedByZero = 1;

int main()
{
 
  try{
    int numer = 12;
    int denom = 0;

    if(denom ==0)
    {
      throw DividedByZero;
    }
    else
    {
      cout << numer/denom;
    }
    

  }catch(int e)
  {
    if (e == DividedByZero)
    {
      cout << "Cant divide by zero";
      cerr<< "Cant Divide by zero";
    }
    
    
      }
  return 0;
}