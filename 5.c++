//WAP to calculate the area and perimeter of the circle by using the concept of class and object
#include<iostream>
#include<conio.h>
using namespace std;
class circle
{
    private :
    float r,a,p;
    public:
    void input()
    {
        cout<<"Enter the value of r"<<endl;
        cin>>r;
    }
    void calc_AP()
    {
        a=3.14*r*r;
        p=2*3.14*r;

    }
    void display()
    {
        cout<<"Area is="<<a<<endl<<"Perimeter is="<<p<<endl;
    }
    
};
int main()
{
    circle c;
    c.input();
    c.calc_AP();
    c.display();
    getch();
    return 0;

}