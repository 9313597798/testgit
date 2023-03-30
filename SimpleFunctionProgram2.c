#include<stdio.h>
#include<conio.h>
void namste();
void bonjour();
void main()
{
    char ch='i';
    printf("enter i for indian and f for french\n");
    scanf("%c",&ch);

    namste();
    
}
void namste()
{
    printf("nmaste\n");
    bonjour();
}
void bonjour()
{
    printf("bonjour");
}