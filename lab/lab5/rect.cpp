#include<iostream>
using namespace std;

class Data
{
  protected:
    float length,breadth;
  public:
    void input()
    {
      cout<<"Enter the length and breadth of rectangle:"<<endl;
      cin>>length>>breadth;
    }
};

class Rectangle: public Data
{
  private:
    float area, perimeter;
  public:
    void calc()
    {
      area = length * breadth;
      perimeter = 2*(length + breadth);
    }
    void display()
    {
      cout<<"Area = "<<area<<endl<<"Perimeter = "<<perimeter<<endl;
    }
};

int main()
{
  Rectangle rect;
  rect.input();
  rect.calc();
  rect.display();
  return 0;
}
