#include<iostream>
using namespace std;

template <class T>
class stack
{
  private:
    T array[100];
    int TOS = -1;

  public:
    void push(T data)
    {
      TOS++;
      array[TOS] = data;
    }
    T pop()
    {
      return array[TOS--];
    }
    void display()
    {
      for(int i = 0;i<=TOS;i++)
      {
        cout<< array[i]<< " ";
      }
      cout<<endl;
    }
};

int main()
{
  stack<int> x;
  x.push(32);
  x.push(-2);
  x.push(4);
  x.push(555);
  x.display();
  cout<<x.pop()<<endl;
  return 0;
}
