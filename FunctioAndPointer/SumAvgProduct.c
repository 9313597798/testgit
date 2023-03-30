#include<stdio.h>
#include<conio.h>
void DOWORK(int a,int b,int *sum,int *pro,float *avg);
void main()
{
     int a=3,b=5;
     int sum,pro;
     float avg;
     DOWORK(a,b,&sum,&pro,&avg);
     printf("sum=%d,pro=%d,avg=%f",sum,pro,avg);
}
void DOWORK(int x,int y,int *sum,int *pro,float *avg)
{
     *sum=x+y; 
     *pro=x*y;
     *avg=(x+y)/2;
}