#include<stdio.h>
int main()
{
    long int i,x,sum=0;
    printf("\nEntr Number");
    scanf("%d",&i);
    x=i;
    while(i>0)
    {
        sum=sum+(i%10)*(i%10)*(i%10);
        i=i/10;
    }
    if(sum==x)
    printf("\n Amstrong Number");
    else
    printf("\n Not Amstrong Number");
    return 0;
}
