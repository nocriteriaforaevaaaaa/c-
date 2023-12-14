//WAP to calculate the area of circle,rectangle and square using the concept of function overloading.
#include<iostream>
#include<conio.h>
using namespace std;
const float pi=3.14;
float area(float r)
{
    return pi*r*r;
}
float area(float l,float b)
{
    return l*b;
}
int area(int l)
{
    return l*l;
}
int main()
{
    float r1=7;
    cout<<"The area of circle is"<<area(r1)<<endl;
    float l1=5,b1=10;
    cout<<"The area of rectangle is"<<area(l1,b1)<<endl;
    int l2=10;
    cout<<"The area of square is"<<area(l2)<<endl;
    getch();
    return 0;
}