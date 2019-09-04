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

    T pop() {
      T element = datastore[top];
      top--;
      return element;
    }

    T peek()
    {
      return datastore[top];
    }

};
int main ()
{
  return 0;
}