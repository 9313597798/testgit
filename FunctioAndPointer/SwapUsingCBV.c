#include<stdio.h>
#include<conio.h>
void _swap(int a,int b);
void swap(int *a,int *b);
void main()
{
    int a=2,b=3;
    _swap(a,b);
    printf("a=%d\n b=%d\n",a,b);
    swap(&a,&b);
    printf("a=%d\n  b=%d\n",a,b);
}
//call by value
void _swap(int x,int y)
{
    int t=x;
    x=y;
    y=t;
    printf("x=%d\n y=%d\n",x,y);
}
// call by reference  its use to return multipal value 
void swap(int *x,int *y)
{
    int t=*x;
    *x=*y;
    *y=t;
    printf("x=%d\n y=%d\n",*x,*y);
}