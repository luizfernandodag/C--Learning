#include <iostream>
#include <map>

using namespace std;

int main()
{
  map<string, string> numbers;

   numbers["Jones"] = "365";
    numbers["Smith"] = "3651";
     numbers["Brown"] = "35";

     cout <<"Jones: " << numbers["Jones"] <<endl;
     cout << "numbers of numbers: " << numbers.size() <<endl;
     numbers.erase("Smith");
     cout << "numbers of numbers: " << numbers.size() <<endl;





  return 0;
}