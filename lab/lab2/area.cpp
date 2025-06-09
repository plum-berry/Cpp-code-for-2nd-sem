#include<iostream>
using namespace std;

class Rectangle
{
    private:
        float length, breadth,area,perimeter;

    public:
        void input()
        {
            cout<<"Enter the length and breadth of the rectangle"<<endl;
            cin>>length>>breadth;
            area = length*breadth;
            perimeter = 2*(length*breadth);
        }

        void display()
        {
          cout<<"Area = "<<area<<endl;
          cout<<"Perimeter = "<<perimeter<<endl;
        }
};

int main()
{
  Rectangle rect;
  rect.input();
  rect.display();
  return 0;
}
