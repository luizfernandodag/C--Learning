#include <iostream>
#include <deque>
#include <fstream>
#include <string>
#include <map> 
using namespace std;
void showNumber(map<string,string> phoneList)
{
  string name;
  cout << "Enter a name: ";
  cin >> name;
  cout << endl << "The number is: " << phoneList[name] << endl;
}

void showMenu()
{
  cout <<"1. Get a number"<<endl;
  cout <<"2.quit"<<endl;
  cout <<endl;
  cout << "Enter a choice: ";
}
string getName(string line){
  int pos = line.find(',');
  return line.substr(0,pos);
}
string getNumber(string line){
  int pos = line.find(',');
  return line.substr(pos+1);
}
int main ()
{
  map<string,string> phoneList;
  ifstream inFile("phonelist.txt");
  string line, name, number;
  while(!inFile.eof() )
  {
    getline(inFile,line);

    name = getName(line);
    number = getNumber(line);
    phoneList[name] = number;
  }

  inFile.close();
  int choice = 1;

  while(choice != 2)
  {
    showMenu();
    cin >> choice;

    if(choice == 1)
    {
      showNumber(phoneList);
    }
  }


  return 0;
}