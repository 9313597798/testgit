#include<stdio.h>
#include<conio.h>
void printAddress(int n);
void _printAddress(int *n);
void main()
{
    int n=4;
    printAddress(n);
    printf("address of n is=%u\n",&n);
    _printAddress(&n);
    printf("address of n is=%u\n",&n);
}
//call by value
void printAddress(int n)
{
    printf("address of n is=%u\n",&n);
}
//call by reference
void _printAddress(int *n)
{
    printf("address of n is=%u\n",&n);
}
