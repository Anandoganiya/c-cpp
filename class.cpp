#include<iostream>
using namespace std;

class item
{
    int number;
    int cost;
    public:
    void getdata(int x,int y)
    {
        number = x;
        cost = y;
    }
    void putdata();
};

void item :: putdata()
{
    cout<<"number: "<<number<<endl;
    cout<<"cost: "<<cost;
}
 int main()
 {
     item x;
     x.getdata(100,20);
     x.putdata();

     return 0;
 }