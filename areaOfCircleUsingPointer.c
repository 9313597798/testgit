#include<stdio.h>
#include<conio.h>
#include<string.h>
//void calculateArea(int* ,double*);
void main()
{
    int rad;
    double area;
    printf("Enter a rad");
    scanf("%d",&rad);
    calculateArea(&rad,&area);
    printf("area of circle with %d is %lf",rad,area);
}
void calculateArea(int *r,double *a)
{
    *a=(3.14*(*r)*(*r));
}
// void calculateArea(int *rad,double *area)
// {
//     *area=(3.14*(*rad)*(*rad));
// }
