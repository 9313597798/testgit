#include<stdio.h>
void main()
{
    int x=10;
    int *p=&x;
    x=*p++;
    //printf("%d\n",*p);
    printf("%d\n",x);
    x=++(*p);
    printf("%d\n",x);
    x=*++p;
    printf("%d\n",x);
}