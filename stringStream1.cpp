#include <iostream>
#include <sstream>

using namespace std;
class Person{
  private:
  string firstName, middleName, lastName;
  int age;

  public:
    Person(string f, string m, string l, int g)
    {
      firstName = f;
      middleName = m;
      lastName = l;
      age = g;
    }

    string toString()
    {
      stringstream stm;
      stm <<  firstName << " " << middleName <<  " " << lastName << " " << age;
      return stm.str();
    }

};
int main ()
{
  Person aPerson("Luiz", "Fernando","Gadelha", 28);
  cout << aPerson.toString();
  return 0;
}