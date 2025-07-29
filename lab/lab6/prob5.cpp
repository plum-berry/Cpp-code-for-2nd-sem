#include<iostream>
using namespace std;

template <typename T>
T add(T x, T y)
{
  return x+y;
}

int main()
{
  int a = 43, b =32;
  cout<<a<<" + "<<b<<" = "<<add(a,b)<<endl;

  float p = 2.5413, q = -3.1415;
  cout<<p<<" + "<<q<<" = "<<add(p,q)<<endl;

  long r = 343553253, s = 5900303;
  cout<<r<<" + "<<s<<" = "<<add(r,s)<<endl;

  return 0;
}
