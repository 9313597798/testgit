#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y,tempnam;
    printf("Enter a Number x And y\n");
    scanf("%d %d",&x,&y);

    printf("before exchange the value x=%d and y=%d\n",x,y);
    tempnam=x;
    x=y;
    y=tempnam;
    printf("after exchange the value x=%d and y=%d :",x,y);


    return 0;



}