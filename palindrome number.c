#include<stdio.h>
int main()
{
    long int i,x,rev=0;
    printf("\nEnter number");
    scanf("%d",&i);
    x=i;
    while(i>0)
    {
        rev=(rev*10)+i%10;
        i=i/10;
    }
    if(rev==x)
    printf("pallindrome");
    else
    printf("Not pallindrome");
    return 0;
}