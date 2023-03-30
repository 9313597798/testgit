

#include<stdio.h>
#include<conio.h>
void square(int n);
void _square(int *n);
void main()
{
    int number=4;
    square(number);
    printf("number is=%d\n",number);
    _square(&number);
    printf("number is=%d\n",number);

}
//call by value
void square(int n)
{   
    n=4;
    n=n*n;
    printf("square is=%d\n",n);
}
//call by referanace
void _square(int *n)
{
    *n=*n * *n;//4*4
    printf("square is=%d\n",*n);
}