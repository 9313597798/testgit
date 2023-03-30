#include<stdio.h>
void largenumber(int,int);
void main()
{
    // int a,b;
    int a=1, b=2;
    // printf("Enter a number1\n");
    // scanf("%d",&a);
    // printf("Enter a number2\n");
    // scanf("%d",&b);
    
    largenumber(a,b);
}
void largenumber(int x,int y)
{
    if(x>y)
    {
        printf("large number is%d",x);
    }
    else{
        printf("large number is%d",y);
    }
}