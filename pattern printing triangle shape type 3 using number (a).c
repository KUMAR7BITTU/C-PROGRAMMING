#include<stdio.h>
int main()
{ 
    int n,i,x=1;
    printf("\nEnter number of rows");
    scanf("%d",&n);
    while(n>0)
    { 
        printf("\n");
        i=1;
        while(i<=n)
        {
            printf("%d",x);
            i++;
        }
        n=n-1,x=x+1;
    }
    return 0;
}