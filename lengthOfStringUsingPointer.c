#include<stdio.h>
#include<conio.h>
void main()
{
    int length=0;
    char str1[30];
    char *ptr;
    ptr=str1;
    printf("enter a value for str1\n");
    scanf("%s",str1);
    while(*ptr!='\0')
    {
        length++;
        ptr++;
    }
    printf("length of string is %d\n",length);
}