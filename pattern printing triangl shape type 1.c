#include<stdio.h>
int main()
{
    int n,i,j;
    printf("\nEnter Number Of Rows");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        printf("\n");
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