#include<iostream>
using namespace std;

class Distance
{
  private:
    int feet,inch;
  public:
    Distance(int feet=0,int inch=0)
    {
      this->feet = feet;
      this->inch = inch;
    }
    Distance operator +(Distance &d)
    {
      Distance temp;
      temp.inch = inch + d.inch;
      temp.feet = feet + d.feet + temp.inch/12;
      temp.inch = temp.inch%12;
      return temp;
    }
    void display()
    {
      cout<<feet<<"ft, "<<inch<<" inch"<<endl;
    }
};

int main()
{
  Distance d1(43,4),d2(5,10),d3;
  d3 = d1+d2;
  d3.display();
  return 0;
}
