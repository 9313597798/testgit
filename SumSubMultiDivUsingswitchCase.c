#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,NUM,sum,sub,multi,div;
    printf("Enter a Number\n");
    scanf("%d %d",&a,&b);
    printf("1 for sum\n");
    printf("2 for sub\n");
    printf("3 for multi\n");
    printf("4 for div\n");
    printf("Enter a NUMBER\n");
   
    scanf("%d",&NUM);
    switch (NUM)
    {
    case 1:
    
    sum=a+b;
    printf("sum is %d\n ",sum);//printf("%d",a-b)
        break;
    case 2:
    sub=a-b;
    printf("sub is %d\n",sub);
    break;

    case 3:
    multi=a*b;
    printf("multi is %d\n",multi);
    break;

    case 4:
    div=a/b;
    printf("div is %d\n",div);
    break;


    default:
    printf(" not found");
        break;
    }
}