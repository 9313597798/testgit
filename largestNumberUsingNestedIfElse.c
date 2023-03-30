#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Entre a  three Number\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("a is largest Number%d\n",a);
        }
        else
        {
            printf("c is largest Number%d\n",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("b is largest Number%d\n",b);
        }
        else
        {
            printf("c is largest Number%d\n",c);
        }

    }
    if(a<b)
    {
        if(a<c)
        {
            printf("a is small Number%d\n",a);
        }
        else
        {
            printf("c is largest Number%d\n",c);
        }
    }
    else
    {
        if(b<c)
        {
            printf("b is small Number%d\n",b);
        }
        else
        {
            printf("c is largest Number%d\n",c);
        }

    }
}