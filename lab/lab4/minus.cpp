#include<iostream>
using namespace std;

class Test
{
  private:
    int data;
  public:
    Test()
    {
      data = 0;
    }
    Test(int data)
    {
      this->data = data;
    }
    Test operator -(Test t) 
    {
      Test temp;
      temp.data = data + t.data;
      return temp;
    }
    void display()
    {
      cout<<"data = "<<data<<endl;
    }
};

int main()
{
  Test t1(43),t2(38),t3;
  t1.display();
  t2.display();
  t3 = t1-t2;
  t3.display();
  return 0;
}
