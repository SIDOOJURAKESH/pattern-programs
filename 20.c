#include<stdio.h>
int main()
{
    int i,j,n;
    char ch=65,ch1=97;
    printf("enter the number: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n-i;j++)
        {
            printf(" ");
        }
    for(j=0;j<=i;j++)
    {
        if(i%2==0)
        {
            printf("%c",ch);
        }
    else
    {
        printf("%c",ch1);
    }
    }
    ch++;
    ch1++;
    printf("\n");
    }
    
    return 0;
    }
