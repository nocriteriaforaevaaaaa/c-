//Create a class named distance with data members feet and inches.Use the necessary member function to add two distances and display the result in main().

#include<iostream>
#include<conio.h>
using namespace std;
class dist
{
    private:
    int ft,inch;
    public:
    void input()
    {
        cout<<"Enter the value of feet and inch"<<endl;
        cin>>ft>>inch;
    }
    dist add_dist(dist d1,dist d2)
    {
        dist temp;
        temp.inch=d1.inch+d2.inch;
        temp.ft=d1.ft+d2.ft+temp.inch/12;
        temp.inch=temp.inch%12;
        return(temp);

    }
    void display()
    {
        cout<<"Feet="<<ft<<endl<<"inch="<<inch<<endl;

    }
};
int main()
{
    dist d3,d4,d5;
    d3.input();
    d4.input();
    d5=d5.add_dist(d3,d4);
    d5.display();
    getch();
    return 0;
}