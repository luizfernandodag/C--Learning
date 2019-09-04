#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
//new
#include <algorithm>
#include <numeric>

using namespace std;
template<typename T>

void display(vector<T> vec)
{
  for (int i = 0; i < vec.size(); i++)
  {
    /* code */
    cout << vec[i] << " ";
  }
  cout <<endl;
  
}

int genRandom()
{
  return rand() %100 + 1;
}

int main ()
{

  vector<int> numbers (10);

   srand(time(NULL));
  // for (int  i = 0; i < numbers.size(); i++)
  // {
  //   numbers[i] = rand() % 100 + 1;
  // }
  
  //generate function
  generate(numbers.begin(), numbers.end(), genRandom);

  display(numbers);
 //accumulate function
  int sum = accumulate(numbers.begin(),numbers.end(),0);

  //  for (int  i = 0; i < numbers.size(); i++)
  // {
  //   sum += numbers[i] ;
  // }
  cout << "sum: " << sum << endl;
  
  
  return 0;

}