#include<iostream>
using namespace std;

class Feet
{
  private:
    float data;
  public:
    Feet(float data)
    {
      this->data = data;
    }
    void display()
    {
      cout<<"Distance = "<<data<<" ft"<<endl;
    }
    float getFeet()
    {
      return data;
    }
};
class Meter
{
  private:
    float data;
  public:
    Meter(Feet f)
    {
      data = f.getFeet()/3.281;
    }
    void display()
    {
      cout<< "Distance = "<<data<<" m"<<endl;
    }
};
int main()
{
  Feet ft(10);
  ft.display();
  Meter m(ft);
  m.display();
  return 0;
}
