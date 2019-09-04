#include <iostream>
#include <string>
using namespace std;
template<typename T>


class Stack
{
  private:
    T datastore[100];
    int top;
  public:
    Stack()
    {
      top = -1;
    }

    void push(T data)
    {
      top++;
      datastore[top] = data;
    }

    T pop() (
      T element = datastore[top];
      top--;
      return element;
    )

    T peek()
    {
      return datastore[top];
    }

    int count()
    {
      return top + 1;
    }

    void clear()
    {
      for (int i = 0; i < top-1; i++)
      {
        datastore[i] =  typename T::value_type();
      }
      
    }

    bool isEmpty()
    {
      return top == -1 ? true:false;
    }

};
int main ()
{

  return 0;
}