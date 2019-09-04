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

//derived class

class Manager : public Employee {
  private:
    bool salaried;
  public:
    Manager(string name, double payRate, bool isSalaried = false): Employee(name,payRate)
    {
      salaried = isSalaried;
    }

    bool getSalaried()
    {
      return salaried;
    }
};



int main( )
{


  Employee emp1("Jane Smith", 35000);
  Employee emp2("Bill Brown", 32000);

  Manager mang("Paula", 10000, true);

  cout << emp1.toString() << endl;
  
  cout << mang.toString() << (mang.getSalaried() ? "TRUE": "FALSE" ) << endl;
  return 0;
}


























// #include <iostream>
// using namespace std;
// int main() 
// {
//     cout << "Hello, World!";
//     return 0;
// }
