#include<iostream>
#include<cstring>
using namespace std;

class myString
{
  private:
    char* name = new char[20];
  public:
    void input()
    {
      cout<<"Enter a string:";
      cin>>name;
    }
    void display()
    {
      cout<<name<<endl;
    }
    myString operator +(myString s)
    {
      myString temp;
      strcpy(temp.name,name);
      strcat(temp.name,s.name);
      return temp;
    }
};

int main()
{
  myString word1,word2,word3;
  word1.input();
  word2.input();
  word3 = word1 + word2;
  word3.display();
  return 0;
}
