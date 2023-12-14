//WAP to find the greatest among two numbers using the concept of return by reference
#include<iostream>
#include<conio.h>
using namespace std;
int &grt(int &x,int &y)
{
    if (x>y)
    {
        return (x);
    }
    else{
        return(y);
    }
}
int main()
{
    int x1=5,y1=10;
    grt(x1,y1)=-100;
    cout<<"x1="<<x1<<endl<<"y1="<<y1<<endl;
    getch();
    return 0;

}