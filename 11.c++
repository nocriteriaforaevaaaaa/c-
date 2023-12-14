//Create a class named time with data members days,hours,minutes and seconds.Use the necessary member function and WAP to add two times and display the result in the main().


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
    Time add_time(Time t1,Time t2)
    {
      Time temp;
      temp.sec=t1.sec+t2.sec;
      temp.mins=t1.mins+t2.mins+temp.sec/60;
      temp.sec=temp.sec%60;
      temp.hrs=t1.hrs+t2.hrs+temp.mins/60;
      temp.mins=temp.mins%60;
      temp.days=t1.days+t2.days+temp.hrs/24;
      temp.hrs=temp.hrs%24;
      return(temp);
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
    t5=t5.add_time(t3,t4);
    t5.display();
    getch();
    return 0;

}