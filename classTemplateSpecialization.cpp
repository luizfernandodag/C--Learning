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

template <>
class Stack<string>
{

  private:
    string datastore[100];
    int top;

  public:

  Stack()
  {
    top = -1;
  }

  void push(string val)
  {
    ++top;
    datastore[top] = val;
  }

  string pop ()
  {
    string val = datastore[top];
    //Clean the stack top
    datastore[top] = "";
    --top;
    return val;

  }

  string peek()
  {
    return top>=0? datastore[top]:"";
  }

};


int main ()
{

  //Stack numbers;


  // Stack<int> numbers;
  // numbers.push(12);
  // numbers.push(111);
  // cout << numbers.peek()<<endl;
  // int value = numbers.pop();

  // cout << value << endl;

  Stack<string> names;
  names.push("mary");
  names.push("joe");
  cout << names.peek()<<endl;
  string name = names.pop();
  cout << names.peek() <<endl;
  return 0;
}