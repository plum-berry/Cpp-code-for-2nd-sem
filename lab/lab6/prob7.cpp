#include<iostream>
using namespace std;

template <typename T>
T add(T x, T y)
{
  return x+y;
}

template <typename T>
T add(T x, T y,T z)
{
  return x+y+z;
}

int main()
{
  int a = 3,b=-100;
  cout<<a<<" + "<<b<<" = "<<add(a,b)<<endl;

  int p = 23, q = -5783, r = 482;
  cout<<p<<" + "<<q<<" + "<<r<<" = "<<add(p,q,r)<<endl;

    return 0;
}
