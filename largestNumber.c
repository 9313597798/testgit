#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter a Number A and B and C\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
    if(a>c)
    {
        printf("A is largest");
    }
        else
    {
        printf("c is largest");

    }
    }
    else
    {
        if(b>c)
        {
            printf("b is largest");
        }
        else
        {
            printf("%d is largest Number",c);
        }
    }

}