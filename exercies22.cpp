#include <iostream>
#include <vector>

using namespace std;

class Quadrilateral{
  protected:
    double side1, side2, side3, side4;

  public:
    Quadrilateral(double s1, double s2, double s3, double s4)
    {
      side1 = s1;
      side2 = s2;
      side3 = s3;
      side4 = s4;

    }

    virtual void Display()
    {
      cout << "Quadrilateral with sides : " << side2 << " " << side2 << " " << side3 << " " << side4 <<endl;
     
    }
};

class Trapezoid: public Quadrilateral{
  public:
  Trapezoid(double s1, double s2, double s3, double s4):Quadrilateral(s1,s2,s3,s4)
  {

  }

   virtual void Display()
    {
      cout << "Trapezoid with sides : " << side2 << " " << side2 << " " << side3 << " " << side4 <<endl;
     
    }
};

class Square: public Quadrilateral {
  public: 
    Square(double side):Quadrilateral(side,side,side,side)
    {

    }

     virtual void Display()
    {
      cout << "Square with sides : " << side2 << " " << side2 << " " << side3 << " " << side4 <<endl;
     
    }
};


int main()
{
 Trapezoid t1(1,2,3,5);
  Square s1(2);
  t1.Display();
  s1.Display(); 

  vector<Quadrilateral *> quads;
  quads.push_back(&t1);
  quads.push_back(&s1);

  for  ( int i = 0; i < quads.size(); i++)
  {
      quads[i]->Display();
  }
  
  return 0;

}


