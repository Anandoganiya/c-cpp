#include<bits/stdc++.h>
#define MAX 100
using namespace std;

void display(int *,int);
int main()
{
    int i,j,n,incr,arr[MAX],k;

    cout<<"Enter the number of elements : ";
       cin>>n;
    cout<<"\n";

        for(i=0; i<n; i++)
            cin>>arr[i];

    cout<<"Enter the increment(odd value)\n";
         cin>>incr;
    cout<<"\n";

        //Shell Sort
        while(incr>=1)
        {
         for(i=incr;i<n; i++)
          {
              k=arr[i];
                for(j=i-incr; j>=0 && k<arr[j]; j = j-incr)
                    arr[j+incr] = arr[j];
                    arr[j+incr] = k;
          }
          incr = incr-2;
        }
        display(arr,n);
}
void display(int *arr,int n)
{
    int i;
            cout<<"Sorted array is: "<<endl;
        for(i=0;i<n;i++)
            cout<<arr[i]<<" ";

}
