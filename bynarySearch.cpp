#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>

using namespace std;

void print(vector<int> arr , int begin, int end)
{
  for (int i = begin; i < end; i++)
  {
    cout << arr[i] << " ";
  }
  cout<<endl;

}

int binarySearch(vector<int> vec, int key)
{
  int first = 0;
  int loop = 0;

  int last = vec.size() -1;
  print(vec, first, last);
  
  while(first <= last)
  {
    cout << "LOOP: " << loop <<endl;
    int mid = (first + last)/2;
    if(key > vec[mid])
    {
      first = mid + 1;
      print(vec, first, last);
    }
    else if( key <  vec[mid])
    {
      last = mid - 1;
      print(vec, first, last);
    }
    else
    {
       cout << "Found: " << vec[mid] ;
      return mid;
     
    }
    
  ++loop;
    
  }
  return -(first +1);
}

int main()
{
 // "editor.autoClosingBrackets": false,
 //   "editor.suggestOnTriggerCharacters": false

  vector<int> numbers;
  srand(unsigned(time(0)));
  for (int i = 0; i < 50; i++)
  {
    numbers.push_back((rand()%100) + 1);

  }

  sort(numbers.begin(), numbers.end());
  print(numbers, 0 ,numbers.size());

  int key;
  cout << "Enter a number to search for: ";
  cin >> key;
  int retValue = binarySearch(numbers, key);

  if(retValue > -1)
  {
    cout << "Found number at: " << retValue << endl;
  }
  else
  {
    cout << key << " not found";
  }
  



  
  

  return 0;
}