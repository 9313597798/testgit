#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fptr;
    fptr=fopen("newtest.text","w");//w means write the data
    if(fptr==NULL)
    {
        printf("file not exists");
    }
    else
    {
        printf("file is exists");
    }
}