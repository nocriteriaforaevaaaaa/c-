//Create a class named complex with data members real and imaginary.Use the necessary member function to add two complex numbers and display the result in main().

#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
    private:
      int r,img;
    public:
    void input()
    {
        cout<<"Enter the real and imaginary part"<<endl;
        cin>>r>>img;

    }
    complex add_c(complex c1,complex c2)
    {
        complex temp;
        temp.r=c1.r+c2.r;
        temp.img=c1.img+c2.img;
        return(temp);
    }
    void display()
    {
        cout<<"Real="<<r<<endl<<"Imaginary="<<img<<endl;
    }
};
int main()
{
    complex c3,c4,c5;
    c3.input();
    c4.input();
    c5=c5.add_c(c3,c4);
    c5.display();
    getch();
    return 0;
}