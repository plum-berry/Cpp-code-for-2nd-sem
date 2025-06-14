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
    friend void swap(One&,Two&);
    void display()
    {
      cout<<"data of one: "<<data<<endl;
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
    friend void swap(One&,Two&);
    void display()
    {
      cout<<"data of two: "<<data<<endl;
    } 
};
void swap(One& a,Two& b)
{
  int temp = a.data;
  a.data = b.data;
  b.data = temp;
}
int main()
{
  One x(-4);
  Two y(10);
  x.display();
  y.display();
  swap(x,y);
  x.display();
  y.display();
  return 0;
}
