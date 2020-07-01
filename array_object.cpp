#include<iostream>
using namespace std;

class Employees
{
    char name[20];
    int age;
    public:
    void get_data()
    {
        cout<<"\nEnter name\n";
        cin>>name;
        cout<<"Enter the age\n";
        cin>>age;
    }
    void display();
};

void Employees :: display()
{
    cout<<"\nname : "<<name<<endl;;
    cout<<"age  : "<<age<<endl;
}

const int size = 3;

int main()
{
    Employees manager[size];
     int age;
     char name[20];
    for(int i=0;i<size;i++)
    {
        cout<<"Manager :"<<i+1;
        
        manager[i].get_data();
    }
    
    
    for(int i=0;i<size;i++)
    {
        
        cout<<"Manager :"<<i+1;
        manager[i].display();
    }

    return 0;
}