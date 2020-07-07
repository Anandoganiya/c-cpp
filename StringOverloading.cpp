#include<iostream>
#include<string.h>
using namespace std;

class String
{
    int length;
    char *name;
    public:
    String()
    {
        length = 0;
        name = new char[length + 1 ];#pragma endregion
    }
    String(char *s)
    {
       length = strlen(s);
       name = new char[length + 1 ];
       strcpy(name,s);
    }
    friend String operator+(String &a,String &b );
    friend int operator<=(String &a,String &b);
    void display();
    void dis();
};

String operator+(String &a,String &b)
{
    String temp;
    int len;
     temp.length = a.length+b.length;
     temp.name = new char[temp.length+1];
     strcpy(temp.name,a.name);
     strcat(temp.name,b.name);
     return temp;
}

int operator<=(String &a,String &b)
{
    if(a.length<=b.length)
        return 1;
        else
            return 0;
}

void String :: display()
{
    cout<<"\nName is : "<<name<<endl;
} 
void String :: dis()
{
    cout<<"\n"<<name<<endl;
} 

int main()
{
    String s1("John");
    char *name1 = "Smith";
    String s2(name1);
    String s3;
    s3 = s1+s2;
    s1.display();
    s2.display();
    s3.display();

    if(s1<=s2)
    {
       s1.dis();
       cout<<"is smaller than";
       s2.dis();
    }
    else
     {
       s2.dis();
       cout<<"is smaller than";
       s1.dis();
    }
  return 0;
}