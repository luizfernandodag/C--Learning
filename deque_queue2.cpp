#include <iostream>
#include <deque>



using namespace std;

int find(deque<string> line, string value)
{
  for (int i = 0; i < line.size(); i++)
  {
    if(line.at(i) == value)
    {
        return i;

    }
  }

  return -1;
  
}

int main()
{
  deque<string> line;

  line.push_back("Client1");
  line.push_front("ClientFront");
   line.push_back("ClientBack");
     line.push_back("Luiz");
       line.push_back("Laurie");
         line.push_back("Gonzaga");
           line.push_back("Henrique");

  
cout << "Eu: " << find(line,"Luiz");

string name;
cout <<"Name to find: ";
cin >> name;

cout << name << " at: " << find(line, name);

//Insert
  deque<string>::iterator iter = line.begin();
  iter++;

  line.insert(iter,"Donnie");

  for(iter = line.begin(); iter < line.end(); ++iter)
  { 
    cout << *iter << endl;
  }



  return 0;
  
}