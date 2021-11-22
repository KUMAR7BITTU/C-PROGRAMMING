#include<stdio.h>
int main()
{
    int n,i;
    printf("\nEnter Number Of Rows");
    scanf("%d",&n);
    while(n>0)
    {
        printf("\n");
        i=1;
        while(i<=n)
        {
            printf("*");
            i++;
        }
        n=n-1;
    }
    return 0;
}