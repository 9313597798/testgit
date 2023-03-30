#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n;
    printf("Enter a number of rows and column");
    scanf("%d",&n);
    for(i=n; i>=1; i--)
    {
        for(j=n-1; j>=i; j--)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++ )
        {
            printf("$ ");
        }
        printf("\n");
    }
}