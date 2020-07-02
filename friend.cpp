#include<iostream>
using namespace std;

class Sample
{
    int a,b;
    public:
    void get_data()
    {
        a=25,b=40;
    }
    friend float mean(Sample);
};

float mean(Sample s)
{
    return float(s.a+s.b)/2.0;
}


int main()
{
    Sample x;
    x.get_data();
    cout<<"Value of x is: "<< mean(x);

    return 0;
}