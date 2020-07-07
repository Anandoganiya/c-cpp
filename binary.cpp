#include<iostream>
using namespace std;

class complex
{
    float real;
    float imag;
    public:
    complex()
    {
        real=0;
        imag=0;
    }
    complex(float x,float y)
    {
        real = x;
        imag =y;
    }
    complex operator +(complex);
    void display();
};

void complex :: display()
{
    cout<<real<<"+"<<imag<<"i"<<endl;
}

complex complex :: operator+(complex c)
{
    complex temp;
    temp.real = real+c.real;
    temp.imag = imag+c.imag;
   return temp;
}


int main()
{
    complex c1(10.2,20.4),c2,c3;
     c2 = complex(20.2,30.5);
    c1.display();
    c2.display();
    c3 = c1+c2;
    c3.display();


    return 0;
}