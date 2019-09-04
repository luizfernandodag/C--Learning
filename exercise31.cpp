#include <iostream>
using namespace std;
template <typename T>

bool equals(T value1, T value2)
{
  return value1==value2? true:false;
}
int main ()
{
  int a=1,b=2;
  equals(a,b)?(cout<<a<<" and "<<b<<" are equal"<<endl): (cout<<a<<" and " << b << " are not equal" << endl);

   string word1 = "hello";
   string word2 = word1;

   equals(word1,word2)?(cout<<word1<<" and "<<word2<<" are equal"<<endl): (cout<<word1<<" and " << word2 << " are not equal" << endl);


    return 0;
}