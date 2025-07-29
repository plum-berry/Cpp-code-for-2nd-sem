#include<iostream>
using namespace std;

class Base
{
  private:

  public:
    void display()
    {
      cout<<"Hello from the base class"<<endl;
    }

};

class A:public Base
{
  private:

  public:

};

class B:public Base{
  private:

  public:


};


class C:public Base{
  private:

  public:
};


int main()
{
  A a1;
  B b1;
  C c1;
  a1.display();
  b1.display();
  c1.display();
  return 0;
}

