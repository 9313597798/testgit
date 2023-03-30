#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n;
    printf("Enter a number");
    scanf("%d",&n);
    for(int i=0; i<=n; i++)
    {
        for(int k=0; k<=n-i; k++)
        {
            printf(" ");
        }
        for(int j=0; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");

    }
}