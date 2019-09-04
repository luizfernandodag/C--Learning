#include <iostream>

using namespace std;
template <typename T, typename U>

T max(T arg1, U arg2)
{
  return arg1>arg2 ? arg1:arg2;
}
int main ()
{
  double num1 = 35.55;
  int num2 = 13;

  cout << "max: " << max(num2,num1) << endl;
  return 0;
}