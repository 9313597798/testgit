#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fptr;
    fptr=fopen("test.txt","r");
    int ch;
    fscanf(fptr,"%d",&ch);
    printf("number is =%d",ch);
    fscanf(fptr,"%d",&ch);
    printf("%d",ch);      
    fclose(fptr);
}