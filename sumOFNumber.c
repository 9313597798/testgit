#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    printf("Enter  a number");
    scanf("%d",&n);
    int sum;
    for(i=1; i<=n; i++)
    {
    sum=sum+i;  
    }
    printf("%d",sum);
}