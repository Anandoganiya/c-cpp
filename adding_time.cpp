#include<iostream>
using namespace std;

class Time
{
   int hr; //hour
   int minu; // minutes
   public:
   void get_data(int hour,int minutes)
   {
       hr = hour;
       minu = minutes;
   }
   void display()
   {
       cout<<"\nHour :"<<hr<<endl;
       cout<<"Minutes : "<<minu;
   }
   void sum(Time,Time);
};

void Time :: sum(Time T1,Time T2)
{
    minu = T1.minu+T2.minu;
    hr = minu/60;
    minu = minu%60;
    hr = hr + T1.hr + T2.hr;
}

int main()
{

    Time t1,t2,t3;
    t1.get_data(2,45);
    t2.get_data(3,30);
    t3.sum(t1,t2);
    
    cout<<"T1 ";
    t1.display();
    cout<<"\n";
    cout<<"T2 ";
    t2.display();
    cout<<"\n";
    cout<<"T3 ";
    t3.display();


    return 0; 
}