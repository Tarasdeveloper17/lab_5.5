
#include <iostream>
#include <cmath>
#include <math.h>


using namespace std;

int f(int m, int level, int &depth);
int g(int m);


int  g(int m)
 {
    int a;
    int c;
    cout << "a = "; cin >>a;
    cout << "c = "; cin >>c;
  return (a - m + c) % 10;
 }
 
 int f(int m, int level, int &depth)
 {
  if(level > depth)
  {
      depth = level;
      
      cout << "level = " << level << endl;
  }
  
  if(m<=9 && m>=0)
  {
   
      return m;
  }
  else
  {
   return g(m) * f(m - 1 - g(m), level + 1, depth) + m;
  }
     
 }
 

int main()

{
 int depth = 0;
 
 int  func_g = g(4);
 
 int func_f = f(8,1,depth);
 
 cout << "depth = " << depth << endl;
 cout << "g() = "<< func_g << endl;
 cout << "f() = "<< func_f << endl;
  
 return 0;
}
