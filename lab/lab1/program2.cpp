#include<iostream>
#include<cmath>
using namespace std;

const float PI = 3.1415;

void TotalSufaceArea(float radius,float height)
{
  float area =  2*PI*radius*radius + 2*PI*radius*height;
  cout<<"The Total Surface area of the cylinder is: "<<area<<endl;
}

void CurvedSurfaceArea(float radius,float height)
{
  float area = 2*PI*radius*height;
  cout<<"The Curved Surface area of the cylinder is: "<<area<<endl;
}

void Volume(float radius,float height)
{
  float volume = PI*radius*radius*height;
  cout<<"The volume of the cylinder is: "<<volume<<endl;
}

int main()
{
  float radius,height;
  cout<<"Enter the radius and height of the cylinder"<<endl;
  cin>>radius>>height;
  Volume(radius,height);
  TotalSufaceArea(radius,height);
  CurvedSurfaceArea(radius,height);
  return 0;
}
