//WAP to calculate TSA,CSA,and Volume of the cylinder in a function and display in main.(pass by reference)
#include<iostream>

using namespace std;
const float pi=3.14;
void calc(float r,float h,float&t,float&c,float&v)
{
    t=2*pi*r*(r+h);
    c=2*pi*r*h;
    v=pi*r*r*h;

 }
int main()
{
    float r1,h1,t1,c1,v1;
    cout<<"enter the value of r and h"<<endl;
    cin>>r1>>h1;
    calc(r1,h1,t1,c1,v1);
    
    cout<<"T.S.A="<<t1<<endl<<"C.S.A="<<c1<<endl<<"Volume="<<v1<<endl;
   return 0;
}
