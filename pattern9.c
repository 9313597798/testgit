//pending
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,k;
    printf("Enter a number");
    scanf("%d",&n);
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            for(int k=0; k<=i; k++)
            {
                printf("%d",i);
            }
        }
        printf("\n");
    }

}