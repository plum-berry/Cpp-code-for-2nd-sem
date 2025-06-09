#include<iostream>
using namespace std;

class Length
{
  private:
    float meter,feet;

  public:
    void input()
    {
      cout<<"enter the length in meteres"<<endl;
      cin>>meter;
      feet = meter*3.28;
    }
    void display()
    {
      cout<<meter<<"m in feet is "<<feet<<"ft"<<endl;
    }
};

int main()
{
  Length len;
  len.input();
  len.display();
  return 0;
}
