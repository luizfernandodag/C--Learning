//Selection sort

#include <iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

void print(int arr[] , int size)
{
  for (int i = 0 ; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout<<endl;

}

void selectionSort(int arr[], int size)
{
  int first, temp,loop =0;
  for(int i = size - 1; i > 0; --i )
  {
    
    first = 0;
    for (int j = 1; j <=i; j++)
    {
      cout << "LOOP i: " << i << " j: " << j << endl;
       print(arr, size);
       
      if(arr[j]  > arr [first])
      {
        first = j;
      }
      temp = arr[first];
      arr[first] = arr[i];
      arr[i] = temp;
     
    }
    
  }


}

int main ()
{
  const int size = 10;
  int numbers[size];
  for (int i = 0; i < size; i++)
  {
    numbers[i] = (rand()%100) +1;
    cout << numbers[i] << " ";

  }
  cout << endl;
  selectionSort(numbers, size);
  cout<< "Sorted "<<endl;
  print(numbers, size);
  
  return 0;
}


