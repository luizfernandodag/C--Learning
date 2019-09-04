#include <iostream>

#include<map>
#include<utility>

using namespace std;

int main()
{
  multimap<string,string> numbers;

  numbers.insert(pair<string,string>("Jones", "123"));
    numbers.insert(pair<string,string>("Bruno", "245"));
      numbers.insert(pair<string,string>("Gadelha", "111"));
        numbers.insert(pair<string,string>("Gadelha", "333"));
          numbers.insert(pair<string,string>("Gadelha", "456"));
          //first occurence
          string searchName = "Gadelha";
          multimap<string,string>::iterator iter = numbers.find(searchName);
// last occurence
           multimap<string,string>::iterator last = numbers.upper_bound(searchName);

           for(; iter != last; ++iter)
           {
             cout << iter->first<<": " << iter->second << endl;
           }



}