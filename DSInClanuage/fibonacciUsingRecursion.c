// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//     int n;
//     printf("enter a number \n");
//     scanf("%d",&n);
//     fibo(n);
//     for(int i=0; i<n; i++)
//     {
//         printf("%d  ",fibo(i));
//     }
// }
// int fibo(int n)
// {
//     if(n==0)
//     {
//         return 0;
//     }
//     if(n==1)
//     {
//         return 1;
//     }
//     else
//     {
//         return fibo(n-1)+fibo(n-2);
//     }
// }

// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//     int n;
//     printf("enter a number");
//     scanf("%d",&n);
//     for(int i=0; i<n; i++)
//     {
//     printf("%d  ",fibonacci(i));
//     }

// }
// int fibonacci(int n)
// {
//     if(n==0)
//     return 0;
//     else if(n==1)
//     return 1; 
//     else
//     {
//         return fibonacci(n-1)+fibonacci(n-2);
//     }
// }

#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        printf("%d\t",fibonacci(i));
    }

}
int fibonacci(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return fibonacci(n-1)+fibonacci(n-2);
}