#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

int main()
{
  //100 90 80 70 60

  ifstream gradeFile;
  stringstream grades;

  int grade;
  int total = 0;
  gradeFile.open("grades.txt");
  string line;
  getline(gradeFile,line);
  grades << line;// get the full line until /n
  gradeFile.close();

  for (int i = 0; i < 5; i++)
  {

    grades >> grade;// one element separated by ' '
    cout << "grade" << i << ": " << grade << endl;
    total += grade;
  }


  cout << "Total: " << total <<endl;
  double average = total/5;
  cout << "Averagre: " << average << endl;


  
  return 0;
}