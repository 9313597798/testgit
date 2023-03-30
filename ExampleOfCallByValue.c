//call by value

#include<stdio.h>
#include<conio.h>
void printAddress(int n);
void main()
{   
    int n;
    n=4;
    printAddress(n);
    printf("%d\n",&n);

}
void printAddress(int n)
{
    printf("%d\n",&n);

}




