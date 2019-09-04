#include <iostream>

#include <string>

using namespace std;


void display(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    /* code */

    cout << arr[i] << " ";
  }
  
}

void displayStr(string arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    /* code */

    cout << arr[i] << " ";
  }
  
}


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

  displayStr(names, 10);


  
  return 0;
}