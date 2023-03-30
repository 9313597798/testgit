  // call by reference me address same hota he
#include<stdio.h>
#include<conio.h>
void _printAddress(int *n);
void main()
{
    int n=4;
    _printAddress(&n);
    printf("%u\n",&n);
}
void _printAddress(int *n)
{
    printf("%u\n",n);//address store hoga
}