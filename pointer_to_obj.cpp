#include<iostream>
#include<string.h>
using namespace std;

class city
{
    protected:
    char *city_name;
    int length;
    public:
     city()
     {
        length = 0;
        city_name = new char[length + 1];
     }
    void getname(char *s)
     {
        length = strlen(s);
        city_name = new char[length+1];
        strcpy(city_name,s);
     }
    void display();
};

void city :: display()
{
    cout<<"The city is "<<city_name<<endl;
}

int main()
{
    char name[10];
    city *cptr[3];
    for(int i=0;i<3;i++)
    {
        cin>>name;
        cptr[i] = new city;
        cptr[i]->getname(name);
    }
    for(int i=0;i<3;i++)
        cptr[i]->display();

        return 0;

}
