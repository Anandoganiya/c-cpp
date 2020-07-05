#include<iostream>
#include<string.h>
using namespace std;

class String
{
    char *name;
    int length;
    public:
    String()
    {
        length = 0;
        name = new char[length+1];
    }

    String(char *s);
    void join(String &s1,String &s2);
    void display();

};

String :: String(char *s)
{
    length = strlen(s);
    name = new char[length+1];
    strcpy(name,s);
}

void String :: join(String &s1,String &s2)
{
    length = s1.length + s2.length;
    delete name;
    name = new char[length + 1];
  
    strcpy(name,s1.name);
    strcat(name,s2.name);
    
}

void String ::  display()
{
    cout<<name<<endl;
}


int main()
{
    
    String name1("Hello");
    String name2("World");
    String name3;
     name3.join(name1,name2);    
    
    name1.display();
    name2.display();
    name3.display();
    

    return 0;
}

