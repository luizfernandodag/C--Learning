#include <iostream>
using namespace std;
template <typename T>
class Stack {

  private:
    T datastore[100];
    int top;

  public:

  Stack()
  {
    top = -1;
  }

  void push(T num)
  {
    ++top;
    datastore[top] = num;
  }

  T pop ()
  {
    T val = datastore[top];
    //Clean the stack top
    datastore[top] = 0;
    --top;
    return val;

  }

  T peek()
  {
    return top>=0? datastore[top]:-1;
  }

};

int main ()
{

  //Stack numbers;
  Stack<int> numbers;
  numbers.push(12);
  numbers.push(111);
  cout << numbers.peek()<<endl;
  int value = numbers.pop();

  cout << value << endl;
  return 0;
}