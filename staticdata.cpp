#include<iostream>
using namespace std;

class item 
{
    int number;
    static int count;
    public:;
    void getdata(int x)
    {
        number = x;
        count++;
    }
    void display();

};

void item :: display()
{
    cout<<"count:"<<count<<endl;
}
int item :: count;
int main()
{
  item a,b,c;
  a.display();
  b.display();
  c.display();

  a.getdata(100);
  b.getdata(200);
  c.getdata(300);

  
  cout<<"After reading the data\n";
  a.display();
  b.display();
  c.display();
  
return 0;
}