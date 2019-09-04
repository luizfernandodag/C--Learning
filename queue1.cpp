#include <iostream>
using namespace std;
template<typename T>

class Queue{

  private:
    T datastore[100];
    int back;
    const static int front =0;
    void shift(){
      for(int i = front; i <=back; ++i )
      {
        datastore[i] = datastore[i+1];
      }
      back--;
    }

  public:
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

};

int main()
{
  return 0;
}