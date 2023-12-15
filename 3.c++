//WAP to calculate SI by using the concept of inline function and by taking the default value of rate as 15%
#include<iostream>
#include<conio.h>
using namespace std;
inline float si(float p,float t,float r=15)
{
    return((p*t*r)/100);
}
int main()
{
    float p1,t1;
    cout<<"Enter the value of p and t"<<endl;
    cin>>p1>>t1;
    cout<<"SI="<<si(p1,t1)<<endl;
    getch();
    return 0;
}