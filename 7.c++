//Create a class named time with data members days,hours,minutes and seconds.Use the necessary member function and WAP to add two times display.
#include<iostream>
#include<conio.h>
using namespace std;
class Time
{
    private:
    int days,hrs,mins,sec;
    public:
    void input()
    {
        cout<<"Enter the days,hours,minutes and seconds"<<endl;
        cin>>days>>hrs>>mins>>sec;

    }
    void add_time(Time t1,Time t2)
    {
      sec=t1.sec+t2.sec;
      mins=t1.mins+t2.mins+sec/60;
      sec=sec%60;
      hrs=t1.hrs+t2.hrs+mins/60;
      mins=mins%60;
      days=t1.days+t2.days+hrs/24;
      hrs=hrs%24;
    }
    void display()
    {
        cout<<"Days="<<days<<endl<<"Hours="<<hrs<<endl<<"Minutes="<<mins<<endl<<"Seconds="<<sec<<endl;

    }
};
int main()
{
    Time t3,t4,t5;

    t3.input();
    t4.input();
    t5.add_time(t3,t4);
    t5.display();
    getch();
    return 0;

}