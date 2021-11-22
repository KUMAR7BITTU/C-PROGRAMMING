#include<stdio.h>
int main()
{
    int i,fac=1;
    printf("\nEnter Number");
    scanf("%d",&i);
    while(i>0)
    {
        fac=fac*1;
        i--;
    }
    printf("\nfactorial=%d";fac);
    return 0;
}