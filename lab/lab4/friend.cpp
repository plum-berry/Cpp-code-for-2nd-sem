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
    friend bool operator >=(Test,Test);
    void display()
    {
      cout<<"data = "<<data<<endl;
    }
};

bool operator >=(Test t1,Test t2)
{
  if(t1.data > t2.data || t1.data == t2.data)
  {
    return true;
  }
  else{
    return false;
  }
}

int main()
{
  Test t1(70),t2(-2);
  t1.display() ;
  t2.display();
  if(t1>=t2)
  {
    t1.display();
    cout<<"Is greater"<<endl;
  }
  else{
    t2.display();
    cout<<"Is greater"<<endl;
  } return 0;
}

