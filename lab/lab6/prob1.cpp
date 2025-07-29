#include<iostream>
using namespace std;
class Test
{
  public:
    

    void display()
    {
      cout<<"Hello from Test class"<<endl;
    }


};


class Test1{
  public:



    void display()
    {
      cout<<"Hello from Test1 class"<<endl;
    }
};

class Test2: public Test,public Test1{
  private:

  public:


};

int main()
{
  Test2 t;
  /*t.display();*/
  t.Test1::display();
  t.Test::display();
  return 0;
}
