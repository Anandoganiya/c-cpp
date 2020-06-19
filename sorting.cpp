/* programmer : Anand 
   Date       :15/6/2020
 */
#include<bits/stdc++.h>
#define MAX 100
using namespace std;

void selection_sort(int *,int);
void bubble_sort(int *,int);
void insertion_sort(int *,int);

int main()
{
    int n,i,ch,arr[MAX];
    cout<<"Enter the number of elements\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while(1)
    {
        cout<<"-----------------------------"<<"\n";
        cout<<"\n1:Selecion sort"<<endl;

        cout<<"\n2:bubble sort sort"<<endl;

        cout<<"\n3:insertion sort"<<endl;
        cout<<"-----------------------------"<<"\n";

        cout<<"\nEnter the choice\n";
        cin>>ch;
       cout<<"-----------------------------"<<"\n";
               switch (ch)
               {
                  case 1:selection_sort(arr,n);
                      break;
                  case 2: bubble_sort(arr,n);
                      break;
                  case 3:insertion_sort(arr,n);
                      break;
                  default:cout<<"Enter the correct choice!\n";
                      break;
               }
    }
    return 0;
}

void selection_sort(int *a,int n)
{
    int i,j,min,temp;

    //selection sort
    for(i = 0;i<n-1;i++)
    {
        min =i;

        for(j=i+1;j<n;j++)
          if(a[min]>a[j])
               min = j;

          if(i!=min)
          {
              temp = a[i];
              a[i]=a[min];
              a[min] = temp;
          }

    }
    cout<<"Sorted array is : ";
    for(i = 0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<"\n";
}

void bubble_sort(int *a,int n)
{
    int i,j,temp;

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
            if(a[j]>a[j+1])
        {
            temp = a[j+1];
            a[j+1] = a[j];
            a[j] = temp;
        }

    }

    cout<<"Sorted array is :";
        for(i = 0;i<n;i++)
            cout<<a[i]<<" ";
            cout<<"\n";

}

void insertion_sort(int *a,int n)
{
        int i,j,k;

     for(i=1;i<n;i++)
    {
        k = a[i];
        for(j = i-1;j>=0 && k<a[j];j--)
            a[j+1]=a[j];
        a[j+1] = k;

    }
    cout<<"Sorted array is :";
        for(i = 0;i<n;i++)
            cout<<a[i]<<" ";
            cout<<"\n";

}
