#include <iostream>
#include <string>// getline function
using namespace std;

int main()
{
  string name;
  cout << "enter name: " << endl;
  //cin >> name;
  getline(cin,name);
 
  cout <<"your name is : " << name;

  char c;
  do{
    c = cin.get();
    cout.put(c);
  }while(!cin.eof());// CTRL + C
 // c = cin.get();//get one char
  return 0;
}