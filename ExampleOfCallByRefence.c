#include <stdio.h>
#include <conio.h>
void printAddress(int *n);
void main()
{
    int n = 4;
    printAddress(&n);
    printf("%u\n", &n);
}
void printAddress(int *n)
{
    printf("%u\n", &n);
}


// output will be both address is same
// examle like 2031312
            // 2031312
            // but dut to some mistake in code
