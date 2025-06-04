#include<iostream>
using namespace std;

inline void add(int a,int b)
{
  int sum = a+b;
  cout<<"the sum is"<<sum<<endl;
}

int main()
{
  int x=10,y=16;
  add(x,y);
  return 0;
}
