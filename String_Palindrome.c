// Checking if the string is PALINDROME or not
#include<stdio.h>
#include<string.h>

int main()
{
    char name[20];
    gets(name);

    int i,j;

    for(i=0,j=strlen(name)-1;i<=j;i++,j--)
        if(name[i] != name[j])
             break;

             if(i>j)
             {
                 printf("String is Palindrome\n");
             }
             else
             {
                 printf("It's not palindrome\n");
             }
             
    return 0;
}