#include<iostream>
using namespace std;

class Ratio
{
  private:
    int numerator,denominator;
  public:
    Ratio()
    {
      numerator = 1;
       denominator = 1;
    }
    Ratio(int numerator,int denominator)
    {
      this->numerator = numerator;
      this->denominator = denominator;
    }
    bool operator ==(Ratio r)
    {
      float x = float(numerator)/float(denominator);
      float y = float(r.numerator)/float(r.denominator);
      if(x == y)
      {
        return true;
      }
      else{
        return false;
      }
    }
};

int main()
{
  Ratio r1(2,4),r2(6,8);
  if(r1==r2)
  {
    cout<<"The ratios are equal"<<endl;
  }
  else {
    cout<<"The ratios are not equal"<<endl;
  }
  return 0;
}
