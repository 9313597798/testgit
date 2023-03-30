//Make a program to a read  5 integer from a file

#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fptr;
    fptr=fopen("test.txt","r");
    int n;
    fscanf(fptr,"%d",&n);
    printf("%d\n",n);
    fscanf(fptr,"%d",&n);
    printf("%d\n",n);
     fscanf(fptr,"%d",&n);
    printf("%d\n",n);
     fscanf(fptr,"%d",&n);
    printf("%d\n",n);
     fscanf(fptr,"%d",&n);
    printf("%d\n",n);

    fclose(fptr);
}