#include<iostream>
#include<format>
#include<string>

using namespace std;

class Time
{
    private:
    int day,hour,min,sec;
    string time;

    public:
        Time(int day,int hour,int min,int sec)
        {
            this->day = day;
            this->hour = hour;
            this->min = min;
            this->sec = sec;
            generate();
        }
        void generate()
        {
            time = format("{} day:{} hr:{} min:{} sec",day,hour,min,sec);
        }
        friend Time add(Time t1,Time t2)
        {
            Time temp;
            temp.sec = t1.sec + t2.sec;
            temp.min = t1.min + t2.min + temp.sec/60;
            temp.sec = temp.sec%60;
            temp.hour = t1.hour + t2.hour + temp.min/60;
            temp.min = temp.min%60;
            temp.day = t1.day + t2.day + temp.hour/24;
            temp.hour = temp.hour%24;
            temp.generate();
            return temp;
        }
        void display()
        {
            cout<<"Time = "<<time<<endl;
        }
};

int main()
{
    Time t1(4,3,56,40),t2(43,4,56,3),t3;
    t1.display();
    t2.display();
    t3 = add(t1,t2);
    cout<<"The sum is "<<endl;
    t3.display();
    return 0;
}