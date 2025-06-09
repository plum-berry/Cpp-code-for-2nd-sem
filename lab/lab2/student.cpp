#include<iostream>
#include<string>

using namespace std;

class Student
{
  private:
    string name,faculty;
    int id;
  public:
    void input(){
      cout<<"Enter the name, faculty and id of student"<<endl;
      cin>>name>>faculty>>id;
      cout<<"--------------------"<<endl;
    }
    bool check(int condition)
    {
      return condition>id;
    }
    void display()
    {
      cout<<"Name: "<<name<<endl<<"Faculty: "<<faculty<<endl<<"ID: "<<id<<endl;
      cout<<"------------"<<endl;
    }
};

int main()
{
  const int num = 2;
  Student students[num];
  for(int i = 0;i<num;i++)
  {
    students[i].input();
  }
  for(int i = 0;i<num;i++)
  {
    if(students[i].check(15)){
      students[i].display();
    }
  }
  return 0;
}
