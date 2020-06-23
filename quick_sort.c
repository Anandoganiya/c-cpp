#include<stdio.h>
# define MAX 100

void quick(int arr[],int low,int up);
int partition(int arr[],int low,int up);

int main()
{
    int arr[MAX],i,n;


    printf("Enter the size of array\n");
    scanf("%d",&n);

    printf("Enter the array\n");
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);

            quick(arr,0,n-1);

            printf("The sorted array is :\n");
                for(i=0;i<n;i++)
                    printf("%d ",arr[i]);
}

void quick(int arr[],int low,int up)
{
    int pivotloc;
    if(low>=up)
        return;
        pivotloc = partition(arr,low,up);
     
        quick(arr,low,pivotloc-1);
        quick(arr,pivotloc+1,up);
}


int partition(int arr[],int low,int up)
{
    int pivot = arr[low],temp;
    int i = low+1;
    int j=up;
    while(i<=j)
    {
        while(arr[i]<pivot && i<up)
                i++;
        while(arr[j]>pivot)
                j--;
        if(i<j)
        {
            temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        else
        {
            i++;
        }
    }
    arr[low]= arr[j];
    arr[j] = pivot;
    return j;
}