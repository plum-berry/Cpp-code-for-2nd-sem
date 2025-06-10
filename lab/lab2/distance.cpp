#include<iostream>
#include<string>
#include<format>

using namespace std;

class Distance
{
    private:
        int km,m,mm;
        string distance;
    public:
        void input()
        {
            cout<<"Enter the distance in Km, m, and mm"<<endl;
            cin>>km>>m>>mm;
            generate();
        }
        void generate()
        {
            distance = format("{}km, {}m, {}mm",km,m,mm);
        }
        friend Distance add(Distance d1,Distance d2)
        {
            Distance temp;
            temp.mm = d1.mm + d2.mm;
            temp.m = d1.m + d2.m + temp.mm/1000;
            temp.mm = temp.mm%1000;
            temp.km = d1.km + d2.km + temp.m/1000;
            temp.m = temp.m%1000;
            temp.generate();
            return temp;
        }
        void display()
        {
            cout<<"Distance = "<<distance<<endl;        
        }
        
};

int main()
{
    Distance d1,d2,d3;
    d1.input();
    d1.display();

    d2.input();
    d2.display();

    d3 = add(d1,d2);
    cout<<"The sum is"<<endl;
    d3.display();
    return 0;
}