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
      this->data= data;
    }
    bool operator >(Test t)
    {
      if(data > t.data)
      {
        return true;
      }
      else {
        return false;
      }
    }
    void display()
    {
      cout<<"The greatest is "<<data<<endl;
    }

};


int main()
{
  Test t1(-43),t2(2);
  if(t1>t2)
  {
    t1.display();
  }
  else{
    t2.display();
  }
  return 0;
}
