#include<iostream>

class Complex
{
  private:
    float real,imaginary;
  public:
    Complex()
    {
      real = 0;
      imaginary = 0;
    }
    Complex(float real,float imaginary)
    {
      this->real = real;
      this->imaginary = imaginary;
    }
    Complex operator+(Complex const& c1)
    {
      Complex temp;
      temp.real = real + c1.real;
      temp.imaginary = imaginary + c1.imaginary;
      return temp;
    }
    void display()
    {
      if(imaginary>0)
      {
        std::cout<<real<<" + "<<imaginary<<"i"<<std::endl;
      }
      else {
        std::cout<<real<<" - "<<-imaginary<<"i"<<std::endl;
      }
    }
};

int main()
{
  Complex z1(2,3), z2(2,-8),z3;
  z1.display();
  z2.display();
  z3 = z1+z2;
  z3.display();
  return 0;
}
