//Template function implementing bubble sort
#include<iostream>
using namespace std;

template<class T>
void bubble(T v[],int n)
{
    for(int i=0;i<n;i++)
        for(int j=n-1;i<j;j--)
            if(v[j]<v[j-1])
            {
                swap(v[j],v[j-1]);
            }
}

template<class X>
void swap(X &x , X &y)
{
    X temp = x;
    x = y;
    y  = temp;
}

int main()
{
    int   x[5] = {5,4,3,2,1};
    float y[5] = {1.8,7.8,1.9,2.7,5.7};

    bubble(x,5);

    for(int i=0;i<5;i++)
        cout<<x[i]<<" ";

    cout<<endl;

    bubble(y,5);
    
    for(int i=0;i<5;i++)
        cout<<y[i]<<" ";
    
    return 0;
}
