#include<stdio.h>
#include<conio.h>
void main()
{
    int n1,n2,GCD_NUM;
    printf("Enter a n1 and n2 number");
    scanf("%d %d",&n1,&n2);
    for(int i=1; i<=n1 && i<=n2; i++)
    {
        if( n1%i==0 && n2%i==0)
        {
            GCD_NUM=i;
        }
    }
    printf("GCD of two number is %d and %d is %d",n1,n2,GCD_NUM);
}