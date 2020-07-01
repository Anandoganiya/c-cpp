#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class binary
{
    string s;
    public:
    void takestring()
    {
        cin>>s;
    }
    void ck_string();
    void display_ones();
    void convert();
};

void binary :: ck_string()
{
    int i;
    for(i=0;i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1')
     {
              cout<<"Invalid binary number\n";
              exit(1);
     }    
    }

}

void binary ::convert()
{
    ck_string();
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='0')
            s.at(i)='1';
            else
                s.at(i)='0';
            
    }
}

void binary :: display_ones()
{
    convert();
    cout<<"The one's complement is:"<<s;
}


int main()
{
    binary b;
    b.takestring();
    b.display_ones();
    return 0;
}