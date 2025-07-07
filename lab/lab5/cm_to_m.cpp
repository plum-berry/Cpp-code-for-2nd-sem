#include<iostream>
using namespace std;

class Meter
{
  private:
    float data;
  public:
    Meter(float cm)
    {
      data = cm/100.0;
    }
    void display()
    {
      cout<<"Distance in meters = "<<data<<endl;
    }
};

int main()
{
  float cm;
  cout<<"Enter distance in centi meters:"<<endl;
  cin>>cm;
  Meter m(cm);
  m.display();
  return 0;
}
