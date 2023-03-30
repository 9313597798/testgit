



#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n;
    printf("Enter a number of rows and column");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=n-i; j>=0; j--)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("$");
            //printf("$ ")
        }
        printf("\n");

    }
}