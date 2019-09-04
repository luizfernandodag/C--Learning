#include <iostream>
using namespace std;

int test1(int arr[], int size)
{
 
  if(size %2 == 1)
  {
    int middle = size/2;
    for (int i = 0; i < size; i++)
    {
      if(i == middle)
      {
        continue;
      }
      else
      {
        if(arr[i] <= arr[middle])
          return 0;
      }
      
    }

    return 1;
  }
  return 0;
  

}

int test2(int arr[], int size)
{
  int result=0;
  for (int i = 0; i < size; i++)
  {
    
    result += (arr[i]%2 == 1) ? arr[i]:-arr[i];
    
  }
  return result; 
  
}



char * test3(char a[], int start, int len, int arraySize)
{
  if( a == NULL || start < 0 || len < 0 || len <= arraySize || (len-start) <= 0)
  return NULL;

  char * result;
  result = (char *) malloc(sizeof(char) * (len - start));
  for (int i = start; i < len; i++)
  {
 
    result[i] = a[i];
  }
  


  return result;
}

int test4 (int n )
{
  cout << endl;
  int result = 0;
  /* do
  {
   
   
   
    
    
     if(n == 0)
    break;
    else
    { 
      result += n%10;
        cout << result<<endl;
    if(n >10 || n < -10);
    { 

    }
    result*=10;
    n /=10;
    if(n == 0)
    break;
     cout << "n = " << n << endl;
     cout << result<<endl;
    }
    
    
     
    
  }while( n != 0); */

  while(n != 0)
  {
    result += n%10;
  
    if((n <10 && n >0) || (n > -10 && n < 0))
    break;
    else
    {
      result *= 10;
      n /=10;
    }
    

  }

  return result;

}


int main()
{
  int arr[] ={1,2,0,2,1};
 

  if(test1(arr, sizeof(arr) / sizeof(int) ))
  {
    cout << "array is centered" << endl;
  }
  else
  {
    cout << "array is not centered" <<endl;
  }
  cout << "test2: " << test2(arr,3)<<endl;
  char c[] = {'a'};
  char * r = test3(c,0,-2,sizeof(c) / sizeof(char));
  cout << "test3: ";
  if(r != NULL)
  for (int i = 0; i < 2; i++)
  {
  
    cout << r[i] << " ";
  }

  cout <<"test 4: " << test4(-12345);
  
  
  return 0;
}