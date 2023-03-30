// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//     int n;
//     printf("enter a number to find the factorial\n");
//     scanf("%d",&n);
//     Factorial(n);
//     printf("factorial is =%d",Factorial(n));
// }
// int Factorial(int n)
// {
//     if(n==0)
//     {
//         return 1;
//     }
//     else{
//         return n*Factorial(n-1);
//     }
// }

#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    printf("%d\n",fcto(n));
}
int fcto(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        // return fcto(n)*fcto(n-1);
        return n*fcto(n-1);
    }
}