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
class Base1
{
  private:

  public:
    Base1()
    {
      cout<<"Constructor of base1 class"<<endl;
    }
    ~Base1()
    {
      cout<<"Destructor of base1 class"<<endl;
    }
};
class Derived:public Base,public Base1{
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
