#include<iostream>
using namespace std;

class Test
{
  private:

  public:

    void display()
    {
      cout<<"Hello from Test class"<<endl;
    }
};

class Test1:public Test
{
  private:

  public:

    void display()
    {
      cout<<"Hello from Test1 class"<<endl;
    }
};

class Test2:public Test{
  private:

  public:
};


int main()
{
  Test1 t1;
  Test2 t2;
  t1.display();
  t2.display();
  return 0;

}
