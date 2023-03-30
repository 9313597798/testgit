// pending
#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=n-i; j--)
        {
            printf(" ");
        }
        for(int k=n;  k>=i; k--)
        {
            printf("*");
        }
        printf("\n");
    }
}
