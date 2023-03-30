#include<stdio.h>
#include<conio.h>
void DoWork(int a,int b,int *sum,float *avg, int *product);
void main()
{
    int a=3;
    int b=4;
    int sum,product;
    float avg;
    DoWork(a,b, &sum,  &avg, &product);
    printf("%d %f %d",sum,avg,product);
    
}
void DoWork(int a,int b, int *sum, float *avg, int *product )
{
    *sum=a+b;
    *avg=(a+b)/2;
    *product=a*b;
}