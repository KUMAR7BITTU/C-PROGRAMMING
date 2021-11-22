#include<stdio.h>
int main()
{
    int n,i;
    printf("\nEnter number of rows");
    scanf("%d",&n);
    while(n>0)
    {
        printf("\n");
        i=1;
        while(i<=n)
        {
            printf("%d",n);
            i=i+1;
        }
        n=n-1;
    }
    return 0;
}