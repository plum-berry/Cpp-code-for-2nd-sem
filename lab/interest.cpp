#include<iostream>
using namespace std;

inline void Interest(float principle,float time,float rate = 15.0)
{
  float interest = (principle*time*rate)/100.0;
  cout<<"The interest with rate = "<<rate<<" is: "<<interest<<endl;
}

int main()
{
  float P,T,R;
  cout<<"Enter the princple,time and rate: ";
  cin>>P>>T>>R;

  Interest(P,T);
  Interest(P,T,R);
  return 0;
}
