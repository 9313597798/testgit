#include<stdio.h>
void main()
{
    int fact;
    int i,n;
    fact=1;
    printf("Entre a Number");
    scanf("%d",&n);
    for(i=n; i>=1; i--)
    {
        fact=fact*i;
       
    }
    
    printf("the fact value is %d",fact);

}