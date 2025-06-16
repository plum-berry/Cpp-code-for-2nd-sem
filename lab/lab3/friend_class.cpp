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
    void display()
    {
      cout<<"data of one: "<<data<<endl;
    }
    friend class Two;
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
    void display()
    {
      cout<<"data of two: "<<data<<endl;
    }
    void editOne(One& a,int value)
    {
      a.data = value;
    }
};

int main()
{
  One x(23);
  Two y(100);
  x.display();
  y.display();
  y.editOne(x,67);
  x.display();
  y.display();
  return 0;
}
