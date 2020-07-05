#include<iostream>
using namespace std;

class complex 
{
    float x,y;
    public:
    complex()
    {
        x = 0;
        y = 0;
    }
   complex(float real,float imagin);
   friend complex sum(complex,complex);
   friend void display(complex);
};

 complex::complex(float real,float imagin)
 {
     x = real;
     y = imagin;
 }

 complex sum(complex c1,complex c2){
     complex c3;
     c3.x = c1.x + c2.x;
     c3.y = c1.y + c2.y;
     return c3;
 }

 void display(complex c)
 {
     cout<<c.x<<" + "<<c.y<<"i"<<endl;
 }

 int main()
 {
     complex a(20,30);
     complex b(30,50);
     complex c = sum(a,b);
     cout<<"c1:";
     display(a);
     cout<<"c2:";
     display(b);
     cout<<"c3:";
     display(c);


     return 0;
 }