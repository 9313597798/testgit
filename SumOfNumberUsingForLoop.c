#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
     int sum=0;
    printf("Enter a  Number\n");
    scanf("%d",&n);
    //using For Loop
    // for(i=0; i<=n; i++)
    // {
    //     sum=sum+i;
    // }
    // printf("sum of number is %d",sum);
    //using while Loop
     i=0;
    while(i<=n)
    {
        
        sum=sum+i;
        i++;
    }
    printf("sum of number is %d",sum);
}