#include<iostream>
using namespace std;

class base
{
    public:
     virtual  void call()
    {
        cout<<"Base class\n";
    }
};

class derived:public base
{
    public:
    void call()
    {
        cout<<"Derived class\n";
    }
};

int main()
{
    base b,*bptr;
     derived d;
    b.call();
    bptr = &b;
    bptr->call();
    bptr = &d;
    bptr->call();
    d.call();


    return 0;

}