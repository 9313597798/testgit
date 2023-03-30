#include <stdio.h>
#include <conio.h>
int result, i;
void main()
{
    int n, i;
    printf("Enter a number");
    scanf("%d", &n);
    result = fibonacci(i);
    for (i = 0; i < n; i++)
    printf("%d", result);
}
int fibonacci(int n)
{
    if (n <= 1)
        return n;
    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
}