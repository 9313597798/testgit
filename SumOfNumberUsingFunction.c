#include<stdio.h>
#include<conio.h>
void add(int x,int y);
void main()
{
    int a,b;
    printf("enter a number1\n");
    scanf("%d",&a);
    printf("enter a number2\n");
    scanf("%d",&b);
    add(a,b);

}
void add(int x,int y)
{
    //printf("addition is %d",x+y);
    if(x>y)
    {
        printf("a is  maxi. %d",x);
    }
    else
     printf("b is  maxi. %d",y);
}