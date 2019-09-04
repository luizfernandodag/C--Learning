#include <iostream>
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
  return 0;
}