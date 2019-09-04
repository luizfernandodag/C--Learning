#include <iostream>
#include <vector>

using namespace std;
int main ()
{
  vector<int> numbers(10);

  vector<int> num2(10);

  for (int i = 1; i < 11; i++)
  {
    numbers.push_back(i);
  }
  int sum = 0;

  for (int i = 0; i < numbers.size(); i++)
  {
    /* code */
    sum += numbers[i];
  }
  cout << "Total: " << sum << endl;
  
  
  return 0;
}