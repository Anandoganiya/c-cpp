#include<iostream>
using namespace std;

class space
{
    int x,y,z;
    public:
    space()
    {
        x=0;
        y=0;
        z=0;
    }
     space(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    void display();
    void operator -();
};

void space :: display()
{
    cout<<"x:"<<x<<"\n";
    cout<<"y:"<<y<<"\n";
    cout<<"z:"<<z<<"\n";
}

void space :: operator-()
{
    x = -x;
    y = -y;
    z = -z;
}

int main()
{
    space s1(10,20,30);
    s1.display();
    -s1;
    s1.display();

    return 0;
}
