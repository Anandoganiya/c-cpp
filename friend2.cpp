#include<iostream>
using namespace std;

class Abc; //Forward declaration

class Xyz
{
    int value;
    public:
    void get_data(int data)
    {
        value = data;
    }
    friend void add(Abc,Xyz);
};

class Abc
{
    int value;
    public:
    void get_data(int data)
    {
        value = data;
    }
    friend void add(Abc,Xyz);
};

void add(Abc value1,Xyz value2)
{
    cout<<"The sum of two different class object is:"<<value1.value+value2.value;
}

int main()
{
    Xyz x;
    Abc a;
    x.get_data(100);
    a.get_data(500);
     add(a,x);

 return 0;

}