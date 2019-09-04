#include <iostream>

#include <string>

using namespace std;
template <typename T>

void display(T arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    /* code */

    cout << arr[i] << " ";
  }
  cout << endl;
  
}


template <typename T>

T max(T &arg1, T &arg2)
{
  return arg1>arg2 ? arg1:arg2;
}
// void displayStr(string arr[], int size)
// {
//   for (int i = 0; i < size; i++)
//   {
//     /* code */

//     cout << arr[i] << " ";
//   }
  
// }


int main ()
{

  const int size = 10;

  int numbers[size];

  for (int i = 0; i < size; i++)
  {
    /* code */
    numbers[i] = i + 1;
  }

  display(numbers, size);

  string names[] {"Nome1", "Nome2", "Nome3", "Nome4", "Nome5", "Nome6", "Nome7", "Nome8", "Nome9", "Nome10"};

  display(names, 10);

  int a = 2;
  int b = 24;
  cout << max(a,b) << endl;
  double x = 2.25, y = .25;
  cout << max(x,y) <<endl;
string w1 = "apple";
string w2 = "aaardwark";

cout << max(w1,w2) <<endl;








  
  return 0;
}