#include<iostream>
using namespace std;

class Distance
{
    private:
     int feet,inch;

    public:
        Distance(int feet,int inch)
        {
            this->feet= feet;
            this->inch  = inch;
        }
        Distance()
        {
            feet = 0;
            inch = 0;
        }
        friend Distance addDistance(Distance d1,Distance d2)
        {
            Distance temp;
            temp.inch = d1.inch + d2.inch;
            temp.feet = d1.feet + d2.feet + temp.inch/12;
            temp.inch = temp.feet%12;
            return temp;
        }

        void display()
        {
            cout<<feet<<"ft, "<<inch<<"in"<<endl;
        }
};

int main()
{
    Distance d1(3,4),d2(5,6);
    d1.display();
    d2.display();
    Distance d3 = addDistance(d1,d2);
    d3.display();
    return 0;
}