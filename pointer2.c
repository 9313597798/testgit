#include<stdio.h>
#include<conio.h>
void main()
{
    int x;
    
    int  *ptr;
    ptr=&x;
    *ptr+=5;
    
    printf("%d\n",x);
    printf("%d\n",*ptr);
    (*ptr)++;
    printf("%d\n",*ptr);
}