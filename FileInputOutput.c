#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fptr;
    fptr=fopen("Newtest.text","r");//r means read the data
    {
        if(fptr==NULL)
        {
            printf("file doesn't exists");
        }
        else
        {
            printf("file is exists");
        }
    }
    fclose(fptr);
}