#include<stdio.h>
#include<conio.h>
int factorial(int*);
void main()

{
    int x;
    int *ptr=&x;
    int *result;
    printf("enter a number");
    scanf("%d",ptr);
    result=factorial(ptr);
    printf("%d %d",*ptr,*result);
}
    int factorial(int *n)
{
    int fact=1,i,*ptr=&fact;
    for ( i = 1; i<=*n; i++)
    {
        fact=fact*i;
    }
    return ptr;
    
}



