#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fptr;
    fptr = fopen("test.txt","r");
    char ch;
    while(ch!=EOF)
    {
        printf("%c",ch);
        ch=fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);
}