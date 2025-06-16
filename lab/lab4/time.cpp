#include<iostream>
using namespace std;

class Time
{
  private:
    int day,hour,min,sec;
  public:
    Time(int day=0,int hour = 0,int min = 0,int sec =0)
    {
      this->day = day;
      this->hour = hour;
      this->min = min;
      this->sec = sec;
    }
    Time operator +(Time &t)
    {
      Time temp(0,0,0,0);
            temp.sec = sec + t.sec;
            temp.min = min + t.min + temp.sec/60;
            temp.sec = temp.sec%60;
            temp.hour = hour + t.hour + temp.min/60;
            temp.min = temp.min%60;
            temp.day = day + t.day + temp.hour/24;
            temp.hour = temp.hour%24;
            return temp;
    }
    void display()
    {
      cout<<day<<" day,"<<hour<<" hour,"<<min<<" min,"<<sec<<" sec"<<endl;
    }
};

int main()
{
  Time t1(43,2,43,53), t2(4,43,5,32),t3;
  t3 = t1+t2;
  t3.display();
  return 0;
}
