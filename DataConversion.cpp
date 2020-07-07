#include<iostream>
using namespace std;

class invent2; //forward declaration

class invent1  //source class
{
    int code;
    int item;
    int price;
    public:
    invent1()
    {
        code=0;
        item=0;
        price=0;
    }
    invent1(int x,int y,int z)
    {
        code = x;
        item = y;
        price = z;
    }
    int getprice()
    {
        return price;
    }
     int getitem()
    {
        return item;
    }
     void display1();
    // operator invent2()
    // {
    //   invent2 temp;
    //   temp.price = price;
    //   temp.item = item;
    //   return temp;
    //  }
};

void invent1::  display1()
{
    cout<<"code: "<<code<<endl;
    cout<<"item: "<<item<<endl;
    cout<<"price: "<<price<<endl;
}

class invent2   //destination class
{
    int price;
    int item;
    public:
    invent2()
    {
        price = 0;
        item = 0;
    }
    invent2(int x,int y)
    {
        price = x;
        item = y;
    }
    invent2(invent1 p)
    {
        price = p.getprice();
        item = p.getitem();
    }
    void display2();
};

void invent2 :: display2()
{
    cout<<"item: "<<item<<endl;
    cout<<"price: "<<price<<endl;
}

int main()
{
    invent1 s1(10,20,30);
    invent2 d1;
    cout<<"Invent 1 data"<<endl;
    s1.display1();
    cout<<"Invent 2 data\n";
     d1 = s1;
    d1.display2();
    return 0;
}