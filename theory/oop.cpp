#include<iostream>
#include<string>
using namespace std;
class Animal{
  public:
    int age;
    string species;
};
int main()
{
  Animal dog;
  dog.age = 16;
  dog.species = "Husky";
  cout<<dog.species.size()<<endl;
  return 0;
}
