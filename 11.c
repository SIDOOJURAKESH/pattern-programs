#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter the n value: ");
    scanf("%d",&n);
    for(i=n-1; i>=1; i--)
    {
        for(j=n; j>=i; j--)
        {
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
