#include<iostream>
#include "Complex.h"

int main()
{
  Complex z1(9,-1),z2(-3,4),z3,z4;
  z1.display();
  z2.display();
  z3 = z1+z2;
  z3.display();
  z4 = z1-z2;
  z4.display();
  return 0;
}
