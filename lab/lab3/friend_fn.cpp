#include<iostream>
using namespace std;
class test2;
class test1
{
    private:
    int a;

    public:
    test1(int a)
    {
        this->a = a;
    }
    friend void swap(test1& t1,test2& t2)
    {
        int temp = t1.a;
        t1.a = t2.b;
        t2.b = temp;        
    }
    friend class test2;
    void display()
    {
        cout<<a<<endl;
    }
};
class test2{
    private:
    int b;
    public:
    test2(int b)
    {
        this->b = b;
    }
    friend void swap(test1& t1,test2& t2);
    void display()
    {
        cout<<b<<endl;
    }
};

int main()
{
    test1 x(65);
    x.display();
    test2 y(43);
    y.display();
    swap(x,y);
    x.display();
    y.display();
    return 0;
}