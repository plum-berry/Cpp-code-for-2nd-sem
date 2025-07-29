#include<iostream>
using namespace std;

class Base
{
  private:

  public:
    Base()
    {
      cout<<"Constructor of base class"<<endl;
    }
    ~Base()
    {
      cout<<"Destructor of base class"<<endl;
    }
};

class Derived:public Base{
  private:

  public:
    Derived()
    {
      cout<<"Constructor of derived class"<<endl;
    }
    ~Derived()
    {
      cout<<"Destructor of derived class"<<endl;
    }
};

int main()
{
  Derived test;
  return 0;
}
