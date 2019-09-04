#include <iostream>
#include <sstream>


using namespace std;
//inheratnce -> specialization

class Employee {
  //private:
  protected:// any derived class can acess 
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
    ~Employee()
    {
      
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
      stm << name << ": " << pay<<endl;
      return stm.str();
    }

  double grossPay(int hours)
  {
    return pay*hours;
  }

};

//derived class

class Manager : public Employee {
  private:
    bool salaried;
  public:
// default constructor
  Manager(): salaried(true){

  }

  Manager(string name, double payRate, bool isSalaried)
  : Employee(name, payRate)
  {
    salaried = isSalaried;
  }

  //destructor
  ~Manager()
  {

  }
    /* Manager(string name, double pay, bool isSalaried = false): Employee(name,pay)
    {
      salaried = isSalaried;
    }
 */
    bool getSalaried()
    {
      return salaried;
    }
    //Pay is private

    double grossPay(int hours)
    {
      return salaried ? pay: pay*hours;
    }
     string toString()
    {
      stringstream stm;
      stm << name << ": " << pay << (salaried ? " Salaried": " Hourly") << endl;
      return stm.str();
    }
};



int main( )
{


  Employee emp1("Jane Smith", 35000);
  Employee emp2("Bill Brown", 32000);

  Manager mang("Paula", 10000, true);

  cout << emp1.toString() << endl;
  cout << "Employee gross pay " << emp1.grossPay(4) << endl;
  
  cout << mang.toString() << (mang.getSalaried() ? "TRUE": "FALSE" ) << endl;

  cout << mang.grossPay(1);
  return 0;
}


























// #include <iostream>
// using namespace std;
// int main() 
// {
//     cout << "Hello, World!";
//     return 0;
// }
