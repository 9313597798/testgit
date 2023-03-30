//it is a call by value  use in pointer 

#include<stdio.h> 
int a,b;

void swap(int,int);
void main()
{
   
    printf("Enter a 2  number");
    scanf("%d %d",&a,&b);


    swap(a,b);
}
void swap(int n,int x)
{
    int temp=0;
    temp=a;
    a=b;
    b=temp;
    printf("swap number is %d %d",a,b);
}
