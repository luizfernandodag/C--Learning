#include <iostream>
#include <sstream>
#include <string>
#include <vector>


using namespace std;
//inheratnce -> specialization

class Employee {
  protected:
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

    double grossPay(int hours)
    {return pay*hours;}


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
    double grossPay(int hours)
    {
      return salaried ? pay:pay*hours;
    }
    string toString()
    {
      stringstream stm;
      string salary = salaried?"Salaried":"Hourly";

      stm << name <<": "<< pay << ": " << salary << endl;
      return stm.str();

    }
};



int main( )
{


  Employee emp1("Jane Smith", 25);
  Employee emp2("Bill Brown", 32);

  vector<Employee> emps;

  Manager mang("Paula", 1200, true);

  emps.push_back(emp1);
  emps.push_back(mang);

  for(int i = 0; i < emps.size(); ++i)
  {
    cout << emps[i].grossPay(40) << endl;
  }


 
  return 0;
}


























// #include <iostream>
// using namespace std;
// int main() 
// {
//     cout << "Hello, World!";
//     return 0;
// }
