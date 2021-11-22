#include<stdio.h>
int main()
{
    int n,i,j,b;
    printf("\nEnter number of rows");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        printf("\n");
        b=1;
        while(b<=8-i)
        {
            printf("_");
            b++;
        }
        j=1;
        while(j<=i)
        {
            printf("*");
            j++;
        }
        i++;
    }
    return 0;
}