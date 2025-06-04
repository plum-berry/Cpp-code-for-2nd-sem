#include<iostream>
using namespace std;

int main()
{
  int x,y;
  cout<<"Enter any two numbers: "<<endl;
  cin>>x>>y;

  cout<<"x = "<<x<<endl<<"y = "<<y<<endl;

  int& a = x;
  int& b = y;

  int temp;
  temp = a;
  a = b;
  b = temp;
  cout<<"x = "<<x<<endl<<"y = "<<y<<endl;
  return 0;

}
