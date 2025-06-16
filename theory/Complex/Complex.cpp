#include<iostream>
#include "Complex.h"

Complex Complex::operator+(Complex c1)
{
  Complex temp;
  temp.real = this->real + c1.real;
  temp.imaginary = this->imaginary + c1.imaginary;
  return temp;
}

Complex Complex::operator-(Complex c1)
{
  Complex temp;
  temp.real = this->real - c1.real;
  temp.imaginary = this->imaginary - c1.imaginary;
  return temp;
}

void Complex::display()
{
  if(imaginary>0)
  {
    std::cout<<real<<" + "<<imaginary<<"i"<<std::endl;
  }
  else {
    std::cout<<real<<" - "<<-imaginary<<"i"<<std::endl;
  }
}

std::ostream & operator <<(std::ostream &out,const Complex &c)
{
  out<<c.real;
  if(c.imaginary>0)
    out<<" + "<<c.imaginary<<"i"<<std::endl;
  else {
    out<<" - "<<-c.imaginary<<"i"<<std::endl;
  } 
  return out;
}

std::istream & operator >>(std::istream &in,Complex &c)
{
  std::cout<<"Enter the real part :";
  in>>c.real;
  std::cout<<"Enter the imaginary part";
  in>>c.imaginary;
  return in;
}
