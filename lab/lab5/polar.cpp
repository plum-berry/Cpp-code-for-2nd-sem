#include<iostream>
#include<cmath>
using namespace std;
const float PI = 3.1415;
class Polar
{
  private:
    float r,theta;
  public:
    Polar(float r,float theta)
    {
      this->r = r;
      this->theta = theta;
    }
    float getR()
    {
      return r;
    }
    float getTheta()
    {
      return theta;
    }
    void display()
    {
      cout<<"( "<<r<<", "<<theta<<" )"<<endl;
    }
};

class Rect
{
  private:
    float x,y;
  public:
    Rect(Polar p)
    {
      x = p.getR()*cos(p.getTheta());
      y = p.getR()*sin(p.getTheta());
    }
    void display()
    {
      cout<<"( "<<x<<", "<<y<<" )"<<endl;
    }
};

int main()
{
  Polar p(4,PI/4);
  p.display();
  Rect r(p);
  r.display();
  return 0;
}
