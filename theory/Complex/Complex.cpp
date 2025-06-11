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
