#include<iostream>
using namespace std;
class Meter
{
  private:
    float data;
  public:
    Meter(float data)
    {
      this->data = data;
    }
    void display()
    {
      cout<< "Distance = "<<data<<" m"<<endl;
    }
    float getMeter()
    {
      return data;
    }
};
class Feet
{
  private:
    float data;
  public:
    Feet(Meter m)
    {
      data = m.getMeter()*3.281;
    }
    void display()
    {
      cout<<"Distance = "<<data<<" ft"<<endl;
    }
};

int main()
{
  Meter m(23);
  m.display();
  Feet ft(m);
  ft.display();
  return 0;
}
