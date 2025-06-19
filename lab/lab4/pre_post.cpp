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
    void operator ++()
    {
      data = data + 1;
    }
    void operator ++(int)
    {
      data = data + 1;
    }
    void display()
    {
      cout<<"data = "<<data<<endl;
    }
};

int main()
{
  Test t(30);
  t.display();
  t++;
  t.display();
  ++t;
  t.display();
  return 0;
}
