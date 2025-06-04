#include<iostream>
using namespace std;


class Rect
{
  private:
    float length,breadth;
    float perimeter,area;

    void Area()
    {
      area = length*breadth;
    }

    void Perimeter()
    {
      perimeter = 2*(length + breadth);
    }

  public:
    void input()
    {
      cout<<"Enter the Length and breadth of Rectangle"<<endl;
      cin>>length>>breadth;
      Area();
      Perimeter();
    }

    void display()
    {
      cout<<"Area = "<<area<<endl;
      cout<<"Perimeter = "<<perimeter<<endl;
    }
};

int main()
{
  Rect r1;
  r1.input();
  r1.display();
  return 0;
}
