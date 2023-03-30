#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char name[30];
    scanf("%s",&name);
    strupr(name);
    //strlwr(name);
    printf("%s",name);
}