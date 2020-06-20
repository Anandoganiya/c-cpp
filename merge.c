#include<stdio.h>
#define MAX 100
void merge(int arr1[],int arr2[],int arr3[],int n1,int n2);
int main()
{
    int arr1[MAX],arr2[MAX],arr3[2*MAX],i,n1,n2;

    printf("Enter the size of array 1\n");
    scanf("%d",&n1);

    printf("Enter array 1\n");
        for(i=0;i<n1;i++)
            scanf("%d",&arr1[i]);

    printf("\nEnter the size of array 2\n");
    scanf("%d",&n2);

    printf("Enter array 1\n");
        for(i=0;i<n2;i++)
            scanf("%d",&arr2[i]);
            merge(arr1,arr2,arr3,n1,n2);
   /* printf("\nThe Merged sorted array is :\n");
        for(i=0;i<n1+n2;i++)
            printf("%d",arr3[i]);
   */
return 0;
}

void merge(int arr1[],int arr2[],int arr3[],int n1,int n2)
{
    int i=0,j=0,k=0;

    while(i<=n1-1 && j<=n2-1)
    {
        if(arr1[i]<arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];

    }

    while(i<=n1-1)
    {
        arr3[k++] = arr1[i++];
    }
    while(j<=n2-1)
    {
        arr3[k++] = arr2[j++];
    }

    printf("\nThe Merged sorted array is :\n");
        for(i=0;i<n1+n2;i++)
            printf("%d\t",arr3[i]);

}
