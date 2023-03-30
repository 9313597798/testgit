// 2 number a and b are written in a file. write a program to replace them with their sum.
#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fptr;
    fptr=fopen("sum.txt","r");
    int a,b;
    fscanf(fptr," %d",&b);
    fscanf(fptr,"%d",&b);

    fclose(fptr);

    fptr=fopen("sum.txt","w");
    fprintf(fptr,"%d",a+b);
    fclose(fptr);

}//some problem in this code