#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("enter a a,b and c");
    scanf("%d%d%d",&a,&b,&c);
    if(a>c && a>b)
    {
        printf("a is largest number %d",a);

    }
    else if(b>c && b>a)
    {
        printf("b is largest number %d",b);
    }
    else{
        printf("c is largest number %d",c);
    }
}