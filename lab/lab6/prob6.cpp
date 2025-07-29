#include<iostream>
using namespace std;

template <typename T>
T Swap(T &a,T &b)
{
  T temp = a;
  a = b;
  b = temp;
}

int main()
{
  int a = 43, b =32;
  cout<<"a = "<<a<<",b = "<<b<<endl;
  swap(a,b);
  cout<<"a = "<<a<<",b = "<<b<<endl;

  float p = 2.5413, q = -3.1415;
  cout<<"p = "<<p<<",q = "<<q<<endl;
  swap(p,q);
  cout<<"p = "<<p<<",q = "<<q<<endl;
  long r = 343553253, s = 5900303;
  cout<<"r = "<<r<<",s = "<<s<<endl;
  swap(r,s);
  cout<<"r = "<<r<<",s = "<<s<<endl;
  return 0;
}
