#include <iostream>
#include <vector>
#include <algorithm>

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
  const int sizeNumbers = 10;
  int numbers[] = {10,1,5,6,3,4,6,8,7,2};
  //sizeNumber -> numbers of elements that will be copied
  vector<int> nums(numbers,numbers + sizeNumbers);
  display(nums);

  //sort
  sort(nums.begin(),nums.end());
  display(nums);

  return 0;
}