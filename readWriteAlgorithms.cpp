#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

template<typename T>

void display(vector<T> v)
{
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;
  
}

int main()
{
  vector<int> numbers;

  for (int i = 1; i <= 10; ++i)
  {
    numbers.push_back(i);

  }
  display(numbers);

  //algorithm
  fill(numbers.begin(),numbers.end(),0);

  display(numbers);
  vector<string> names;
  names.push_back("nome");
   names.push_back("nome");
    names.push_back("nome");
     names.push_back("nome");
      names.push_back("nome");

    display(names);
    //all elements
    fill(names.begin(), names.end(), "empty");
    display(names);
    // replace element
    replace(numbers.begin(), numbers.end(), 0,10);
    display(numbers);


  
  return 0;
}