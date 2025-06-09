#include<iostream>
using namespace std;

int& max(int& a,int& b)
{
  return (a>b)?a:b;
}

int main(){
  int x,y;
  cout<<"Enter two numbers: "<<endl;
  cin>>x>>y;
  int& result = max(x,y);
  cout<<"MAX value = "<<result<<endl;
  return 0;
}
