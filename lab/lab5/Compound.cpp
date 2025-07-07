#include<iostream>
#include<cmath>
using namespace std;

class Dimension
{
  protected:
    float P,T,R;
  public:
    void input()
    {
      cout<<"Enter P,T and R:"<<endl;
      cin>>P>>T>>R;
    }
};

class Compound: public Dimension
{
  private:
    float interest;
  public:
    void calc()
    {
      interest = P*pow(1+R/100.0,T);
    }
    void display()
    {
      cout<<"Interest = "<<interest<<endl;
    }
};

int main()
{
  Compound c;
  c.input();
  c.calc();
  c.display();
  return 0;
}
