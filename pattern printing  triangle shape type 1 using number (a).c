#include<stdio.h>
int main()
{
    int i,j;
    i=1;
    while(i<=5)
    {
        printf("\n");
        j=1;
        while(j<=i)
        {
            printf("%d",j);
            j++;
        }
        i++;
    }
    return 0;
}
