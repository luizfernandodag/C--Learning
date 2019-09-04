#include <iostream>
#include <deque>



using namespace std;

int main()
{
  deque<string> line;

  line.push_back("Client1");
  line.push_front("ClientFront");
   line.push_back("ClientBack");

   for (int i = 0; i < line.size(); i++)
   {
     cout << line[i] <<endl;
     /* code */
   }
   
   line.pop_back();
   line.pop_front();

 for (int i = 0; i < line.size(); i++)
   {
     cout << line[i] <<endl;
     /* code */
   }

   cout <<"Size: " << line.size()  << endl;

  return 0;
  
}