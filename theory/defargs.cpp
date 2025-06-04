#include<iostream>
using namespace std;

void interest(float P,float T,float R=3.0)
{
  float I = (P*T*R)/100.0;
  cout<<"the interest is "<<I<<endl;
}

int main()
{
  float p = 1000.0, t = 2.0;
  interest(p,t);
}
