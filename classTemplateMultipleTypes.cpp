#include <iostream>
#include <vector>

using namespace std;
template<class T, class U>


class CMap{

  private:
    vector<T> keys;
    vector<U> values;
  public:
    void insert(T key, U value)
    {
      keys.push_back(key);
      values.push_back(value);
    }

    void get(int n)
    {
      cout << keys[n] <<": " << values[n] << endl;
    }

};
int main ()
{
  CMap<string, int> grades;

  grades.insert("Jones", 88);
  grades.insert("Alex", 76);

  grades.get(0);
  grades.get(1);
  
  return 0;
}