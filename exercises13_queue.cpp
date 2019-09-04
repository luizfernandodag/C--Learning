#include <iostream>
#include <fstream>
#include <string>
using namespace std;
template<typename T>

class Queue{

  private:
    T datastore[100];
    int back;
    const static int front =0;

   
  public:
   void shift(){
      for(int i = front; i <=back; ++i )
      {
        datastore[i] = datastore[i+1];
      }
      back--;
    }

  Queue()
  {
    back = -1;
  }
  void in(T value)
  {
    ++back;
    datastore[back] = value;
  }
  T out()
  {
    T ret = datastore[front];
    shift();
    return ret;
  }

  void show()
  {
    for (int i = front; i <= back; i++)
    {
      cout << datastore[i] << " ";
  
    }
    cout << endl;
    
  }

  int count ()
  {
    int cnt = 0;
    for(int i = 0; i <= back; ++i)
    ++cnt;
    return cnt;
  }

  T qfront()
  {
    return datastore[front];
  }

  T qback()
  {
    return datastore[back];
  }

  bool isEmpty(){
    return back == -1 ? true:false;
  }

  void clear()
  {
    for (int i = front; i <= back; i++)
    {
      datastore[i] = typename T::value_type();
    }
    
  }

};

int main()
{
  Queue<string> men;
  Queue<string> women;

  string name = "dance.dat";
  string line,sex;
  ifstream inFile (name.c_str());
  while(!inFile.eof())
  {
      getline(inFile,line);
      sex = line.substr(0,1);
      if(!sex.empty())
      {
      if(sex == "M")
      {
        string name2 = line.substr(2);
        men.in(name2);
      }
      else
      {
        string name2 = line.substr(2);
        women.in(name2);
      }
      }

      while(!men.isEmpty() && !women.isEmpty())
      {
        cout << "The dancing partners will be: ";
        cout << men.qfront() << " and " << women.qfront() <<endl;
        men.out();
        women.out();

      }

      if(women.isEmpty() && !men.isEmpty())
      {
        cout << "There are " << men.count() << " men waiting for the next round." <<endl;

        cout << men.qfront() << "will be first to get a partner. " << endl;
      }
      
      if(men.isEmpty() && !women.isEmpty())
      {
        cout << "There are " << women.count() << " women waiting for the next round." <<endl;

        cout << women.qfront() << " will be first to get a partner. " << endl;
      }
      
  }
  return 0;
}