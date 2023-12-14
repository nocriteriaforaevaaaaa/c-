//WAP to convert feet to meters using class and object.[3.28 ft=1m]
#include<iostream>
#include<conio.h>
using namespace std;
class convert
{
    private:
    float ft,m;
    public:
    void input()
    {
        cout<<"Enter the value of ft"<<endl;
        cin>>ft;
    }
    void convert_to_m()
    {
        m=(1/3.28)*ft;
    }
    void display()
    {
        cout<<"The equivalent meter is"<<m<<endl;
    }
};
int main()
{
    convert c1;
    c1.input();
    c1.convert_to_m();
    c1.display();
    getch();
    return 0;
}
