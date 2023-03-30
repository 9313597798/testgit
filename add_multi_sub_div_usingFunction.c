#include<stdio.h> 
int a,b,sum,sub,multi;
int  div;
void LJK(int,int);
void main()
{
   
    printf("Enter a 2  number");
    scanf("%d %d",&a,&b);


    LJK(a,b);
}
void LJK(int a, int b) 
{
    // int temp=0;
    // temp=a;
    // a=b;
    // b=temp;
    sum=a+b;
    printf("sum  is %d\n",sum);
    sub=a-b;
    printf("sum  is %d\n",sub);
    multi=a*b;
    printf("sum  is %d\n",multi);
    div=a/b;
    printf("sum  is %d\n",div);
}
