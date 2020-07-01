#include<iostream>
#include<stdlib.h>
using namespace std;
const int size = 50;
class Item
{
    int itemprice[size];
    int count;
    int itemcode[size];
    public:
    void get_item();
    void get_total();
    void delete_item();
    void displayitems();
    void CNT()
    {
       count = 0;
    }

};

void Item ::displayitems()
{
    cout<<"\ncode  price\n";
    for(int i=0;i<count;i++)
        cout<<itemcode[i]<<"  "<<itemprice[i]<<endl;

}

void Item :: get_item()
{
    int price,code;
    cout<<"Enter the item price\n";
    cin>>price;
    cout<<"Enter item code\n";
    cin>>code;
    cout<<"\n";
    itemprice[count]= price;
    itemcode[count] = code;
    count++;
}

void Item :: get_total()
{
    int sum = 0;
    for(int i=0;i<count;i++)
        sum = sum+itemprice[i];
        cout<<"The total is: "<<sum<<endl;
}

void Item :: delete_item()
{
    int code;
    cout<<"Enter the code :";
    cin>>code;
    cout<<"\n";
    for(int i=0;i<count;i++)
        if(itemcode[i]==code)
            itemprice[i] = 0;
}

int main()
{
    Item order;
    order.CNT();
    int n;
    while(1)
    {
        cout<<"1.Add an item\n";
        cout<<"2.display total\n";
        cout<<"3.remove an item\n";
        cout<<"4.display the items\n";
        cout<<"5.QUIT\n";
        cout<<"Enter your choice\n";
        cin>>n;

        switch (n)
        {
        case 1:order.get_item();
            break;
        case 2:order.get_total();
            break;
        case 3:order.delete_item();
            break;
        case 4:order.displayitems();
            break;
        case 5:exit(1);
            break;
        default:cout<<"Invalid choice enter again!\n";
            break;
        }
    }
    return 0;
}