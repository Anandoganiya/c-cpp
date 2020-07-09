/*
Inheritance Type : Multilevel
*/
#include<iostream>
#include<string.h>
using namespace std;
const int size = 6;

class student
{
    int roll_number;
    char name[20];
    public:
    void get_data(int x,char *p);
    void put_name_roll();
};

void student :: get_data(int x,char *p)
{
    roll_number = x;
    strcpy(name,p);
}

void student :: put_name_roll()
{
    cout<<"Roll number is: "<<roll_number<<endl;
    cout<<"name is: "<<name;
}

class exam
{ 
    protected:
    float subj[size];
    public:
    void get_subj();
    void put_subj();
};

void exam :: get_subj()
{
    cout<<"Enter the marks in subjects\n";
    for(int i=0;i<size;i++)
        cin>>subj[i];
}

void exam :: put_subj()
{
    for(int i=0;i<size;i++) 
        cout<<"\nMark in subject "<<i+1<<" is "<<subj[i]<<endl;
}

class result :public student,public exam
{
    float total_marks;
    public:
    void display();
};

void result :: display()
{
    total_marks = 0;
    for(int i=0;i<size;i++)
        total_marks += subj[i];

    put_name_roll();
    put_subj();
    cout<<"The total marks of student is: "<<total_marks; 
}

int main()
{
    result obj;
    obj.get_data(24,"john");
    obj.get_subj();
    obj.display();

   return 0;
}