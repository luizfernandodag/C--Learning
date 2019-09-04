#include <iostream>
using namespace std;

int main ()
{
  cout <<"hello, world" << endl;
  //endl flush buffer as well
  cout.put('h');
  cout.put('e');
  cout.put('l');
  cout.put('l');
  cout.put('o');
  cout <<"hello, world" << flush;
  cout <<"hello, world" << ends;
  
  return 0;
}