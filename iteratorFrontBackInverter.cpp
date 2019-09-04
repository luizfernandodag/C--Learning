#include <iostream>
#include<vector>
using namespace std;


template <typename T>

void display(vector<T> v)
{
  for (int i = 0; i < v.size(); ++i)
  {
    cout << v[i] << " ";
  }
  cout << endl;
}

int main()
{
  vector<int> v1;
  v1.push_back(1);
   v1.push_back(2);
    v1.push_back(3);
  display(v1);
  vector<int> v2;
  v2.push_back(4);
   v2.push_back(5);
 v2.push_back(6);

//back_inserter
// v1 must allow push back function
 copy(v2.begin(),v2.end(),back_inserter(v1));
display(v1);


  return 0;
}
