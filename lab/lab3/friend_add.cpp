#include<iostream>
using namespace std;
class Two;
class One
{
  private:
    int data;
  public:
    One(int data)
    {
      this->data = data;
    }
    friend int sum(One,Two);
    void display()
    {
      cout<<"data = "<<data<<endl;
    }
};

class Two
{
  private:
    int data;
  public:
    Two(int data)
    {
      this->data = data;
    }
    friend int sum(One,Two);
    void display()
    {
      cout<<"data = "<<data<<endl;
    }
};

int sum(One o,Two t)
{
  return o.data+t.data;
}

int main()
{
  One o(9);
  Two t(-4);
  o.display();
  t.display();
  int result = sum(o,t);
  cout<<"the sum = "<<result<<endl;
  return 0;
}
