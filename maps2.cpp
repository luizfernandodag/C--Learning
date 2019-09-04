#include <iostream>
#include <map>

using namespace std;

int main()
{
  map<string, int> grades;

  grades["Ana"] = 90;
  grades["John"] = 90;
  grades["Jobs"] = 100;

  string name;

  cout << "Enter a name to find: ";
  cin >> name;

  if(grades.find(name) != grades.end())
  {
    cout << name << ": " << grades[name] <<endl;
  }
  else
  {
    cout <<"Not found";
  }
  double average = 0.0;
  int sum = 0;

  map<string,int>::iterator it = grades.begin();
  while(it != grades.end())
  {
    sum += it->second;
    ++it;

  }
  average = sum/ grades.size();
  cout << "the average grade is: " << average;

  





  return 0;
}