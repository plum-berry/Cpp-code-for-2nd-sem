#include<iostream>
using namespace std;

class test
{
    private:
    const char *p;
    public:
        test()
        {
            p = new char[10];
            p = "Test text";
        }
        void display()
        {
            cout<<p<<endl;
        }

};
int main()
{
    test t;
    t.display();
    return 0;
}