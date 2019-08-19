#include <iostream>
#include <sstream>


using namespace std;
//inheratnce -> specialization

class Employee {
  private:
    string name;
    double pay;
  public:
  Employee(){
      name = "";
      pay=0;
    }

    Employee(string empName,double payRate )
    {

      name = empName;
      pay = payRate;
    }

    string getName()
    {
      return name;
    }

    double getPay()
    {
      return pay;
    }

    void setName(string empName){
      name = empName;
    }

    void setPay(double empPay)
    {
      pay = empPay;
    }

    string toString()
    {
      stringstream stm;
      stm << name << ": " << pay;
      return stm.str();
    }

};

int main( )
{


  Employee emp1("Jane Smith", 35000);
  Employee emp2("Bill Brown", 32000);

  cout << emp1.toString() << endl;
  
  return 0;
}


























// #include <iostream>
// using namespace std;
// int main() 
// {
//     cout << "Hello, World!";
//     return 0;
// }
