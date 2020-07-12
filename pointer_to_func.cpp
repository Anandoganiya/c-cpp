#include<iostream>
using namespace std;

typedef int  (*func)(int ,int ); //pointer to function

int  mul(int a,int b)
{
    return a*b;
}

int main()
{
     func ptr;
    ptr  = &mul;
    int  p = ptr(2,6);
    cout<<p;

   
    return 0;
}