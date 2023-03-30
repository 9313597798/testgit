#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fptr;
    fptr=fopen("test.txt","r");
    char ch;
    fscanf(fptr,"%c",&ch);
    printf("character is =%c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("character is =%c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("character is =%c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("character is =%c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("character is =%c\n",ch);
    fclose(fptr);
}