#include<stdio.h>
#include<conio.h>
//#include<string.h>
void main()
{
    int a,b;
    printf("enter a value of a and b\n");
    scanf("%d %d",&a,&b);
    swap(&a,&b);

}
void swap(int *num1, int *num2)
{
    int tamp;
    tamp=*num1;
    *num1=*num2;
    *num2=tamp;
    printf("%d %d",*num1,*num2);
}


