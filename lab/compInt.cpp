#include<iostream>
#include<cmath>
using namespace std;

void CompundInterest(float principle,float rate,float time)
{
  float interest = principle*pow(1+rate/100.0,time);
  cout<<"The compunded interest is : "<<interest<<endl;
}

int main()
{
  float P,R,T;
  cout<<"Enter the Principle,Rate and Time"<<endl;
  cin>>P>>R>>T;
  CompundInterest(P,R,T);
  return 0;
}
