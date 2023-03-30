#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i;
    int sum=0;

    for(int i=0;i<10;i++)
    {
        
        scanf("%d",&a[i]);
        sum=sum+a[i];

    }
    printf("sum=%d",sum);
}