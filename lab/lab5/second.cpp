#include<iostream>
using namespace std;

class Second
{
  private:
    float data;
  public:
    Second(float data)
    {
      this->data = data;
    }
    operator float()
    {
      return data/60.0;
    }
    void display()
    {
      cout<<"time = "<<data<<" secs"<<endl;
    }
};

int main()
{
  Second sec(300);
  sec.display();
  float minute = sec;
  cout<<"time = "<<minute<<" mins"<<endl;
  return 0;
}
